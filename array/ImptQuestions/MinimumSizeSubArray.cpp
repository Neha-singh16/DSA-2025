

// #include <bits/stdc++.h>
// using namespace std;

// int MinimumSizeSubArray(int arr[], int n, int key)
// {
//     int min_size = INT_MAX;
  
//     for(int i = 0; i <n;i++){
//           int sum = 0;
//         for(int j = i ; j <n ; j++){
//            sum += arr[j];
//            if(sum == key){
//             min_size = min( min_size , j-i+1);
//             break;
//            }
//         }
//     }
//     return min_size;
 
   
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter the target sum: ";
//     cin >> key;

//     int ans = MinimumSizeSubArray(arr, n, key);
//     cout << "Minimum len of subarray is: " << ans << endl;

//     return 0;
// }




// Optimal approach
#include <bits/stdc++.h>
using namespace std;

int MinimumSizeSubArray(int arr[], int n, int key)
{
    int min_size = INT_MAX;
    unordered_map<long long , int> mpp;
  int sum = 0;
   for(int i = 0 ; i < n; i++){
    sum += arr[i];
    if(sum == key){
        min_size = min(min_size , i+1);  
    }
    long long rem = sum - key;
 
    if(mpp.find(rem) != mpp.end()){
        int len = i - mpp[rem];
        min_size = min(min_size , len);
    }

    if(mpp.find(sum) == mpp.end()){
        mpp[sum] = i;
    }

   }
    return min_size;
 
   
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the target sum: ";
    cin >> key;

    int ans = MinimumSizeSubArray(arr, n, key);
    cout << "Minimum len of subarray is: " << ans << endl;

    return 0;
}
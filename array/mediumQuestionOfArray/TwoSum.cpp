
// // Brute Force
// // 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.
// #include <bits/stdc++.h>
// using namespace std;

// int TwoSum(int arr[], int n, int key)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             if (arr[i] + arr[j] == key)
//             {
//                 return 1; // YES
//             }
//         }
//     }

//     return 0;
// }
// // NO

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

//     int result = TwoSum(arr, n, key);
//     if (result)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }

// Brute Force
//  // 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.
//  #include <bits/stdc++.h>
//  using namespace std;

// vector<int> TwoSum(int arr[], int n, int key)
// {

//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i + 1; j < n; j++)
//         {

//             if (arr[i] + arr[j] == key)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return {-1, -1};
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

//     vector<int> ans = TwoSum(arr, n, key);
//     if (!ans.empty())
//     {
//         cout << "Indices: " << ans[0] << "," << ans[1] << endl;
//     }
//     else
//     {
//         cout << "No two sum solution found." << endl;
//     }

//     return 0;
// }




//  // 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.
#include <bits/stdc++.h>
using namespace std;

vector<int>  TwoSum(int arr[], int n, int key)
{
 unordered_map<int , int>mpp;
 for(int i = 0; i< n; i++){
    int value = arr[i];
    int more = key - value;
    if(mpp.find(more) != mpp.end()){
        return {mpp[more] , i};
    }
    mpp[value] = i;
 }
 return {-1 , -1};
}
// NO

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the target sum: ";
    cin >> key;

       vector<int> ans = TwoSum(arr, n, key);
    if (!ans.empty())
    {
        cout << "Indices: " << ans[0] << "," << ans[1] << endl;
    }
    else
    {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
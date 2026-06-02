
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>  ThreeSum(int arr[], int n)
// {
// vector<vector<int>> ans;
//  for(int i = 0; i< n; i++){
//     for(int j = i+1 ;  j<n ;j++){
//        vector<int> temp;
//         for(int k =  j+1; k<n ; k++){

//             if(arr[i]+arr[j]+arr[k] == 0){
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[j]);
//                 temp.push_back(arr[k]);
//             }
//         }
//         if (!temp.empty()) {
//             ans.push_back(temp);
//         }
//     }
//  }
//  return ans;
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

//     vector<vector<int>> ans = ThreeSum(arr, n);
//     if (!ans.empty())
//     {
//         for (const auto& triplet : ans) {
//             cout << "Triplet: " << triplet[0] << "," << triplet[1] << "," << triplet[2] << endl;
//         }
//     }
//     else
//     {
//         cout << "No three sum solution found." << endl;
//     }

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> ThreeSum(int arr[], int n)
// {
//     set<vector<int>> uniqueTriplets;
//     for (int i = 0; i < n; i++)
//     {
//         set<int> s;
//         int target = -arr[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             int thirdElement = target - arr[j];
//             // Only add if thirdElement was found in the set (exists in array)
//             if (s.find(thirdElement) != s.end())
//             {
//                 vector<int> triplet = {arr[i], arr[j], thirdElement};
//                 sort(triplet.begin(), triplet.end());
//                 uniqueTriplets.insert(triplet);
//             }
//             s.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
//     return ans;
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

//     vector<vector<int>> ans = ThreeSum(arr, n);
//     if (!ans.empty())
//     {
//         for (const auto &triplet : ans)
//         {
//             cout << "Triplet: " << triplet[0] << "," << triplet[1] << "," << triplet[2] << endl;
//         }
//     }
//     else
//     {
//         cout << "No three sum solution found." << endl;
//     }

//     return 0;
// }



f

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ThreeSum(int arr[], int n)
{
   vector<vector<int>> ans;
   sort(arr, arr + n);
   for(int i = 0; i< n-2; i++){
    if( i > 0 && arr[i]  == arr[i-1]) continue;   //skip duplicates 
      int left =i+1, right = n-1;
      while(left < right) {
        int sum = arr[i] + arr[left] + arr[right];
        if(sum == 0){
            ans.push_back({arr[i], arr[left], arr[right]});
            while(left < right && arr[left] == arr[left+1]) left++;
            while(left < right && arr[right] == arr[right-1]) right--;
            left++;
            right--;
        }
        else if(sum < 0){
            left++;
        }else{
            right--;
        }

    }
   }
 
   return ans;
}
// NO

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

    vector<vector<int>> ans = ThreeSum(arr, n);
    if (!ans.empty())
    {
        for (const auto &triplet : ans)
        {
            cout << "Triplet: " << triplet[0] << "," << triplet[1] << "," << triplet[2] << endl;
        }
    }
    else
    {
        cout << "No three sum solution found." << endl;
    }

    return 0;
}

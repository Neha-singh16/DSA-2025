// // Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// int MaxSumSubArray(int arr[], int n)
// {

//        int maxSum = INT_MIN;
//        for(int i = 0 ; i<n; i++){
//            int sum = 0;
//            for(int j = i; j < n; j++){
//             sum += arr[j];
//               maxSum = max(maxSum , sum);
//            }

//        }
//        return maxSum;

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

//     int ans = MaxSumSubArray(arr, n);
//     cout << "Maximum Sum of Sub Array is: " << ans << endl;

//     return 0;
// }

// optimal solution using kadane's algo
#include <bits/stdc++.h>
using namespace std;

std::pair<int, int> MaxSumSubArray(int arr[], int n)
{

    int maxSum = INT_MIN;
    int sum = 0;
    int start;
    int ansStart = -1; int end = -1;

    for (int i = 0; i < n; i++)
    {
        if(sum == 0){
            start = i;
        }
        sum += arr[i];
        
        if (sum > maxSum)
        {
            maxSum = max(maxSum, sum);
            ansStart = start;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return {ansStart , end};
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

    std::pair<int, int> ans = MaxSumSubArray(arr, n);
    cout << "Maximum Sum Subarray starts at index: " << ans.first << " and ends at index: " << ans.second << endl;

    return 0;
}
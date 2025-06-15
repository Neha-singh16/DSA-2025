// Brute Force
#include <bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[], int n)
{

    //    int maxSum = INT_MIN;
    //    for(int i = 0 ; i<n; i++){
    //        int sum = 0;
    //        for(int j = i; j < n; j++){
    //         sum += arr[j];
    //           maxSum = max(maxSum , sum);
    //        }

    //    }
    //    return maxSum;

    int maxSum = INT_MIN;
    int i = 0;
    int sum = 0;
    for (int j = i; j < n; j++)
    {
        sum += arr[j];
        maxSum = max(maxSum, sum);
        i++;
    }
    return maxSum;
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

    int ans = MaxSumSubArray(arr, n);
    cout << "Maximum Sum of Sub Array is: " << ans << endl;

    return 0;
}
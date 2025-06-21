
// // Brute Force!!
// #include <bits/stdc++.h>
// using namespace std;

// int MaxSumSubArray(int arr[], int n)
// {

//     int maxProfit = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 maxProfit = max(arr[j] - arr[i], maxProfit);
//             }
//         }
//     }
//     return maxProfit;
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
//     cout << "Maximum Profit: " << ans << endl;

//     return 0;
// }

// Optimal approach
#include <bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[], int n)
{

    int minPrice = arr[0];
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int cost = minPrice - arr[i];
        maxProfit = max(maxProfit , arr[i] - minPrice);
        minPrice = min(minPrice , arr[i]);
        
    }
    return maxProfit;
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
    cout << "Maximum Profit: " << ans << endl;

    return 0;
}
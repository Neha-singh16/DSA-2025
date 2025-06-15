

// // Brute Force Approach
// #include <bits/stdc++.h>
// using namespace std;

// int MajorityElement(int arr[], int n)
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if(arr[i] == arr[j]){
//                 cnt++;
//             }
//             if(cnt > n/2){
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
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

//     int ans = MajorityElement(arr, n);

//     cout << ans;

//     return 0;
// }

// // Better Approach
// #include <bits/stdc++.h>
// using namespace std;

// int MajorityElement(int arr[], int n)
// {
//     unordered_map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp){
//         if(it.second > n/2){
//             return it.first;
//         }
//     }
//     return -1;
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

//     int ans = MajorityElement(arr, n);

//     cout << ans;

//     return 0;
// }

// Optimal Approach
#include <bits/stdc++.h>
using namespace std;

int MajorityElement(int arr[], int n)
{
    int cnt = 0;
    int cand;

    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            cand = arr[i];
        }
        else if (arr[i] == cand)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == cand)
        {
            cnt1++;
        }
    }
    if (cnt1 > n / 2)
    {
        return cand;
    }
    return -1;
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

    int ans = MajorityElement(arr, n);

    cout << ans;

    return 0;
}

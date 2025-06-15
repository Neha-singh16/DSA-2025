
// // Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// int SortArray(int arr[], int n)
// {
// for(int i = 0 ; i < n; i++){
//     for(int j = i + 1; j < n ; j++){
//         if(arr[i] > arr[j]){
//             swap(arr[i] , arr[j]);
//         }
//     }
// }

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

//     SortArray(arr, n);
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

// // Better Approach
// #include <bits/stdc++.h>
// using namespace std;

// int SortArray(int arr[], int n)
// {
//     int cnt_0 = 0;
//     int cnt_1 = 0;
//     int cnt_2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             cnt_0++;
//         }
//         else if (arr[i] == 1)
//         {
//             cnt_1++;
//         }
//         else
//         {
//             cnt_2++;
//         }
//     }

//     for (int i = 0; i < cnt_0; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = cnt_0; i < cnt_0 + cnt_1; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = cnt_0 + cnt_1; i < n; i++)
//     {
//         arr[i] = 2;
//     }
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

//     SortArray(arr, n);
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }


// Optimal Approach
#include <bits/stdc++.h>
using namespace std;

int SortArray(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
             swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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

    SortArray(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
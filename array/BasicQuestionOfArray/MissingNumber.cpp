
// // Brute ForceApproach
// #include <bits/stdc++.h>
// using namespace std;

// int FindMissing(int arr1[], int n1)
// {

//     for (int i = 1; i <= n1; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n1; j++)
//         {

//             if (arr1[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n1;
//     cout << "Enter the number of elements: ";
//     cin >> n1;
//   int arr1[n1];
//     for (int i = 0; i < n1; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr1[i];
//     }

//      int ans = FindMissing(arr1, n1);
//     cout << "The missing number is: " << ans << endl;

//     return 0;
// }

// // Better Approach
// #include <bits/stdc++.h>
// using namespace std;

// int FindMissing(int arr1[], int n1)
// {

//  int hash[n1+1] = {0};
//  for(int i = 0; i< n1-1 ;i++){
//     hash[arr1[i]]++;
//  }

//  for(int i = 1 ; i<= n1;i++){
//     if(hash[i] == 0 ){
//         return i;
//     }
//  }

// }

// int main()
// {
//     int n1;
//     cout << "Enter the number of elements: ";
//     cin >> n1;
//   int arr1[n1];
//     for (int i = 0; i < n1; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr1[i];
//     }

//      int ans = FindMissing(arr1, n1);
//     cout << "The missing number is: " << ans << endl;

//     return 0;
// }

// Optimal Approach 1
#include <bits/stdc++.h>
using namespace std;

int FindMissing(int arr1[], int n1)
{

    int sum1 = n1 * (n1 + 1) / 2;
    int sum2 = 0;
    for (int i = 0; i < n1 - 1; i++)
    {
        sum2 += arr1[i];
    }
    return sum1 - sum2;
}

int main()
{
    int n1;
    cout << "Enter the number of elements: ";
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr1[i];
    }

    int ans = FindMissing(arr1, n1);
    cout << "The missing number is: " << ans << endl;

    return 0;
}

// // Optimal Approach 2
// #include <bits/stdc++.h>
// using namespace std;

// int FindMissing(int arr1[], int n1)
// {

// int XOR1 = 0;
// int XOR2 = 0;
// for(int i = 0; i < n1-1 ; i++){
//     XOR1 = XOR1 ^ arr1[i];
//     XOR2 = XOR2 ^ (i+1);
// }
// XOR2 = XOR2 ^ n1;
// return XOR1 ^ XOR2;

// }

// int main()
// {
//     int n1;
//     cout << "Enter the number of elements: ";
//     cin >> n1;
//   int arr1[n1];
//     for (int i = 0; i < n1; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr1[i];
//     }

//      int ans = FindMissing(arr1, n1);
//     cout << "The missing number is: " << ans << endl;

//     return 0;
// }

// Left Rotation of an Array by one position
//  #include <bits/stdc++.h>
//  using namespace std;

// void LeftRotateArray(vector<int>  &arr , int n){
//    int temp = arr[0];
//    for(int i = 0; i< n ; i++){
//     arr[i-1] = arr[i];
//    }

//    arr[n-1] = temp;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     LeftRotateArray(arr , n);
//     cout << "Left Rotated array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }



// Left Rotation of an Array by D position
//Time Complexity: O(n)
//Space Complexity: O(d)

// #include <bits/stdc++.h>
// using namespace std;

// void LeftRotate(vector<int> &arr, int n, int d)
// {

//     int temp[d];
//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = arr[i];
//     }

//     for (int i = d; i < n; i++)
//     {
//         arr[i - d] = arr[i];
//     }

//     for (int i = n - d; i < n; i++)
//     {
//         arr[i] = temp[i - (n - d)];
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     int d;
//     cout << "Enter the number of positions to rotate: ";
//     cin >> d;

//     LeftRotate(arr, n, d);
//     cout << "Left Rotated array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }



// optimize the code by using the reverse method
//Time Complexity: O(n)
//Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;

void LeftRotate(int arr[], int n, int d)
{


    d = d % n;
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);

    reverse(arr, arr + n);
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
    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    LeftRotate(arr, n, d);
    cout << "Left Rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
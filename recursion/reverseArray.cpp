//with two pointers
#include <iostream>
using namespace std;

void reverseArray(int arr[], int r, int l)
{
    if (l <= r)
    {
        return;
    }

    // swap
    int temp = arr[r];
    arr[r] = arr[l];
    arr[l] = temp;

    reverseArray(arr, r + 1, l - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }

    reverseArray(arr, 0, n - 1);
    cout << "\nReversed array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }

    return 0;
}

// with only one pointer
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n, int i)
{
    if (n / 2 <= i)
    {
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;

    reverseArray(arr, n, n - i - 1);
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    reverseArray(arr, n, 0);

    cout << "\nReversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    return 0;
}
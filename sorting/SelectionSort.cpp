#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int maxi;
    for (int i = 0; i <= n - 2; i++)
    {
        maxi = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] > arr[maxi])
            {
                maxi = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[maxi];
        arr[maxi] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element" << i + 1 << ": ";
        cin >> arr[i];
    }

    SelectionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int i = low + 1;
    int j = high;
    int pivot = arr[low];

    while (i < j)
    {
        while (i <= high-1 && arr[i] <= pivot)
            i++;
        while (j >= low+1 && arr[j] > pivot)
            j--;

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
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
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);
    cout << "Sorted array:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
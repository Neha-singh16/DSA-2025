#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
      int j = i;
      while(j > 0 && arr[j] < arr[j-1]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
           cout<<"runs\n";
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

    InsertionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
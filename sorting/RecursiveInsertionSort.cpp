#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int  i ,int n)
{

  
  if (i == n)
  {
    return;
  }

  int j = i ;

  while (j > 0 && arr[j] < arr[j - 1])
  {
    swap(arr[j], arr[j - 1]);
    j--;
  }

  InsertionSort(arr, i+1, n);
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

  InsertionSort(arr, 0, n);
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
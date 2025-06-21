#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
   if( n == 1) return;

   int didSwap = 0;

   for(int j = 0 ; j <= n-2 ; j++){
    if(arr[j ] > arr[j+1]){
         swap(arr[j] , arr[j+1]);
         didSwap = 1;
    };
   
   }

    if(didSwap == 0){
        return;
    }
   
   BubbleSort(arr , n-1);
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

    BubbleSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
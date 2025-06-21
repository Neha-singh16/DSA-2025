#include <bits/stdc++.h>
using namespace std;

void RightRotate(int arr[], int n, int d)
{

    d = d % n;
    int temp[d];
    for(int i = 0;i<d;i++){
        temp[i] = arr[n-d+i];
        cout<< "Temperory array: "<<temp[i]<< " " ;
        }

        for(int i = n-d-1;i>=0;i--){
            arr[i+d] = arr[i]; //0+2 = 1 , 1+2 = 2 , 2+2 = 3
              cout<<"Shifted Values: "  <<arr[i+d]<< " ";
        }

        for(int i = 0; i<d ; i++){
            arr[i] = temp[i];
              cout<< "placed the D values to right shift:  "<<arr[i] << " ";
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
    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    RightRotate(arr, n, d);
    cout << "Left Rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
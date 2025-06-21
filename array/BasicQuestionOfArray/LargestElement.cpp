#include <bits/stdc++.h>
using namespace std;

int LargestAndSlargestElement(vector<int> arr){
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] >  largest){
            slargest = largest;
            largest = arr[i];
             cout <<"Largest element is: "<<largest <<endl;
        }
        else if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
            cout <<"Second Largest element is: "<<slargest <<endl;

        }
    }
    
}

int main(){
int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr1(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element n " << i + 1 << ": ";
        cin >> arr1[i];
    }

 LargestAndSlargestElement(arr1);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void SmallestAndSsmallestElement(vector<int> arr){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i = 1 ; i < arr.size() ; i++){
        if(arr[i] <  smallest){
            ssmallest = smallest;
            smallest = arr[i];
           
        }
        else if(arr[i] < ssmallest && arr[i] != smallest){
            ssmallest= arr[i];
           

        }
    }
     cout <<"Smallest element is: "<<smallest <<endl;
      cout <<"Second Smallest element is: "<<ssmallest <<endl;
    
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

SmallestAndSsmallestElement(arr1);

    return 0;
}
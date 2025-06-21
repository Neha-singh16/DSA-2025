// //Brute Force Approach
// //Time complexity: O(n)
// //Space Complexity: O(d)
// #include<bits/stdc++.h>
// using namespace std;

// void MoveAllZeros(int arr[] , int n){
//     vector<int> temp;
//     for(int i = 0; i < n; i ++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }
//         int nz = temp.size();
//         for(int i = 0; i <nz ; i++){
//             arr[i] = temp[i];

//         }
//         for(int i = nz; i<n ; i++){
//             arr[i] = 0;
//         }
    
// }


// int main(){
//  int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr[i];
//     }
   
//    MoveAllZeros(arr , n);
//     cout << "All the Zeros moved to the end of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }




//     return 0;
// }


//Optimal Solution Approach
//Time complexity: O(n)
//Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

void MoveAllZeros(int arr[] , int n){
    int j = -1;
    for(int i=0 ;i < n;i++){
        if(arr[i] != 0){
            j = i;
            break;
        }
    }
    for(int i = j +1;i < n ; i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[j]);
            j++;
        }
    }
  
    
}


int main(){
 int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr[i];
    }
   
   MoveAllZeros(arr , n);
    cout << "All the Zeros moved to the end of the array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }




    return 0;
}
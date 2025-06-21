

//Brute force
#include <bits/stdc++.h>
using namespace std;

int NumberAppearOnce(int arr1[], int n1)
{
int num = 0;
for(int i = 0; i<n1 ; i++){
    num = arr1[i];
    int count = 0;
    for(int j = 0 ; j < n1 ; j++){
        if(arr1[j] == num){
            count ++;
        }
     
    }
       if(count == 1){
            return num;
        }
}
  

}

int main()
{
    int n1;
    cout << "Enter the number of elements: ";
    cin >> n1;
  int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr1[i];
    }

     int ans =  NumberAppearOnce(arr1, n1);
    cout << "Number that appears once " << ans << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int NumberAppearOnce(int arr1[], int n1)
// {

//   int xor1 = 0;
//   int xor2 = 0;
//   for(int i = 0; i < n1 ; i++){
//      xor1 = xor1 ^ arr1[i];
//      xor2 = xor2 ^ (i+1);
//   }
//   return (xor1^xor2);

// }

// int main()
// {
//     int n1;
//     cout << "Enter the number of elements: ";
//     cin >> n1;
//   int arr1[n1];
//     for (int i = 0; i < n1; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr1[i];
//     }

//      int ans =  NumberAppearOnce(arr1, n1);
//     cout << "Number that appears once " << ans << endl;

//     return 0;
// }
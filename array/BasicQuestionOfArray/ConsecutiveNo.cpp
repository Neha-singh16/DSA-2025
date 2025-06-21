

#include <bits/stdc++.h>
using namespace std;

int ConsecutiveNo(int arr1[], int n1)
{

   int maxi = 0;
   int count = 0;
   for(int i = 0; i < n1;i++){
    if(arr1[i] == 1){
        count++;
        maxi = max(maxi , count);

    }else{
        count = 0;
    }

   }
   return maxi;
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

     int ans = ConsecutiveNo(arr1, n1);
    cout << "Maximum Consecutive number " << ans << endl;

    return 0;
}
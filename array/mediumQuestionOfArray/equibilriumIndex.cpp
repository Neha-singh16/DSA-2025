// Optimal Approach 1
#include <bits/stdc++.h>
using namespace std;

int EquiliblriumIndex(int arr1[], int n1)
{

    // for (int i = 0; i < n1; i++)
    // {
    //     int leftsum = 0;
    //     int rightsum = 0;

    //     for (int j = 0; j < i; j++)
    //     {
    //         leftsum += arr1[j];
    //     }
    //     for (int j = i + 1; j < n1; j++)
    //     {
    //         rightsum += arr1[j];
    //     }

    //     if (rightsum == leftsum)
    //     {
    //         return i;
    //     }
    // }
    // return -1;

       int totalSum = 0;
    for (int i = 0; i < n1; i++)
        totalSum += arr1[i];
    
    int leftsum = 0;
    for (int i = 0; i < n1; i++)
    {
        int rightsum = totalSum - leftsum - arr1[i];
        
        if (leftsum == rightsum)
            return i;
        
        leftsum += arr1[i];
    }
    return -1;
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

    int ans = EquiliblriumIndex(arr1, n1);
    cout << "The Equiliblrium Index number is: " << ans << endl;

    return 0;
}

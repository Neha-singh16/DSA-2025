#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return (i + 1);
}


int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr1(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element n " << i + 1 << ": ";
        cin >> arr1[i];
    }
    
    int k = removeDuplicates(arr1);
    cout << "Array after removing duplicates is: ";
    for (int i = 0; i < k; i++) // print only till k
    {
        cout << arr1[i] << " ";
    }

    return 0;
}

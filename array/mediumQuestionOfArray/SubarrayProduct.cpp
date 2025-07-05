

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> SubarrayProduct(int arr[], int key, int n)
{

    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int pro = 1;
      vector<int> temp;
        for (int j = i; j < n; j++)
        {
            pro *= arr[j];
            if (pro == key)
            {
               break;
            }
            if (pro < key)
            {
            temp.push_back(arr[j]);
             ans.push_back(temp);  
            }
        }
    }
    return ans;
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

    int key;
    cout << "Enter the target sum: ";
    cin >> key;

    vector<vector<int>> ans = SubarrayProduct(arr, key, n);
    cout << "Elements in the subarrays with product less than key: ";
    for (const auto& subarr : ans) {
        cout << "[ ";
        for (int val : subarr) {
            cout << val << " ";
        }
        cout << "]";
    }
    cout << endl;

    return 0;
}
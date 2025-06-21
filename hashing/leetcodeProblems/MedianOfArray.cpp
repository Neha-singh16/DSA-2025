#include <bits/stdc++.h>
using namespace std;

vector<int> merge(const vector<int> &arr1, const vector<int> &arr2)
{
    vector<int> mergedArray;
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            mergedArray.push_back(arr1[i]);
            i++;
        }
        else
        {
            mergedArray.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size())
    {
        mergedArray.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        mergedArray.push_back(arr2[j]);
        j++;
    }

    return mergedArray;
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

    int m;
    cout << "Enter the number of elements: ";
    cin >> m;
    vector<int> arr2(m);

    for (int i = 0; i < m; i++)
    {
        cout << "Enter element m " << i + 1 << ": ";
        cin >> arr2[i];
    }

    vector<int> result = merge(arr1, arr2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " " << endl;
    }
    if (result.size() % 2 == 0)
    {
        int mid1 = result[result.size() / 2 - 1];
        int mid2 = result[result.size() / 2];
        cout << "Median is: " << (mid1 + mid2) / 2.0 << endl;
    }
    else
    {
        int mid = result[result.size() / 2];
        cout << "Median is: " << mid << endl;
    }

    return 0;
}

// Brute Force Approach
#include <bits/stdc++.h>
using namespace std;

vector<int> Intersection(int arr1[], int arr2[], int n1, int n2)
{

    vector<int> ans;
    int vis[n2] = {0};
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && vis[j] == 0)
            {
                ans.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }
            if (arr2[j] > arr1[i])
            {
                break;
            }
        }
    }
    return ans;
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

    int n2;
    cout << "Enter the number of elements: ";
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr2[i];
    }
    vector<int> result = Intersection(arr1, arr2, n1, n2);
    cout << "Intersection elements: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

// Optimal Approach
#include <bits/stdc++.h>
using namespace std;

vector<int> Intersection(int arr1[], int arr2[], int n1, int n2)
{

    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
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

    int n2;
    cout << "Enter the number of elements: ";
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr2[i];
    }

    vector<int> result = Intersection(arr1, arr2, n1, n2);
    cout << "Intersection elements: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

pair<int, int> SumofArray(int n, int target, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int t;
    cout << "Enter the number of target element: ";
    cin >> t;

    SumofArray(n, t, arr);
 

    return 0;
}
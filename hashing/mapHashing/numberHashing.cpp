#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter number: ";
    cin >> n;

    int arr[n];
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
       cout <<"Enter element "<<i + 1<< ": ";
    cin >> arr[i];
        mpp[arr[i]] += 1;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "enter number of frequency: ";
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;
}
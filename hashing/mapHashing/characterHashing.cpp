#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter number: ";
    cin >> s;

    map<int, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {

        mpp[s[i]] += 1;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--)
    {
        char ch;
        cout << "enter number of frequency: ";
        cin >> ch;
        cout << mpp[ch] << endl;
    }
    return 0;
}
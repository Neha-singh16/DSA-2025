#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--)
    {
        char ch;
        cout << "Enter character to find frequency: ";
        cin >> ch;

        cout << hash[ch] << endl;
    }

    return 0;
}
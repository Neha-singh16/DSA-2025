#include <iostream>
using namespace std;

bool checkPalindrome(string &s, int i)
{
    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }
    if (i >= s.length() / 2)
    {
        return true;
    }
    return checkPalindrome(s, i + 1);
}

int main()
{

    string s;
    cout << "Enter string: ";
    cin >> s;

    if (checkPalindrome(s, 0))
    {
        cout << "String is palindrome!";
    }
    else
    {
        cout << "String is not palindrome!";
    }

    return 0;
}
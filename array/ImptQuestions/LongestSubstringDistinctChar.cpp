

// // Optimal approach --> sliding window!!
// #include <bits/stdc++.h>
// using namespace std;

// int LongestSubStringDistnict(string str, int key)
// {

//     unordered_map<char, int> freq;
//     int r = 0;
//     int l = 0;
//     int maxlen = 0;
//     int n = str.length();
//     while (r < n)
//     {
//         freq[str[r]]++;
//         while (freq.size() > key)
//         {
//             freq[str[l]]--;
//             if (freq[str[l]] == 0)
//             {
//                 freq.erase(str[l]);
//             }
//             l++;
//         }
//         int len = r - l + 1;
//         maxlen = max(maxlen, len);

//         r++;
//     }
//     return maxlen;
// }

// int main()
// {

//     cout << "Enter the string: ";

//     string s;

//     cin >> s;
//     int key;
//     cout << "Enter the target sum: ";
//     cin >> key;

//     int ans = LongestSubStringDistnict(s, key);
//     cout << "Longest subarray is: " << ans << endl;

//     return 0;
// }

// More --> Optimal approach --> sliding window!!  TC-> O(n) 
#include <bits/stdc++.h>
using namespace std;

int LongestSubStringDistnict(string str, int key)
{

    unordered_map<char, int> freq;
    int r = 0;
    int l = 0;
    int maxlen = 0;
    int n = str.length();
    while (r < n)
    {
        freq[str[r]]++;
        if (freq.size() > key)
        {
            freq[str[l]]--;
            if (freq[str[l]] == 0)
            {
                freq.erase(str[l]);
            }
            l++;
        }
        if (freq.size() <= key)
        {
            maxlen = max(maxlen, r - l + 1);
        }
        r++;
    }
    return maxlen;
}

int main()
{

    cout << "Enter the string: ";

    string s;

    cin >> s;
    int key;
    cout << "Enter the target sum: ";
    cin >> key;

    int ans = LongestSubStringDistnict(s, key);
    cout << "Longest subarray is: " << ans << endl;

    return 0;
}
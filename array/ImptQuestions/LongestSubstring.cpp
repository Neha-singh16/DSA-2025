//Brute force
// #include <bits/stdc++.h>
// using namespace std;

// int LongestSubArray(string str)
// {

//     int hash[256] = {0};
//     int maxLen = 0;

//     for (int i = 0; i < str.length(); i++)
//     {
//         for (int j = i; j < str.length(); j++)
//         {
//             if (hash[str[j]] == 1)
//                 break;
//             else if(hash[str[j]] == 0 ) {
//                 hash[str[j]] = 1;
//             }

//             int len = j - i + 1;
//             maxLen = max(maxLen, len);
//         }
//     }
//     return maxLen;
// }

// int main()
// {

//     cout << "Enter the string: ";

//     string s;

//     cin >> s;

//     int ans = LongestSubArray(s);
//     cout << "Longest subarray is: " << ans << endl;

//     return 0;
// }



// Optimal approach --> sliding window!!
#include <bits/stdc++.h>
using namespace std;

int LongestSubArray(string str)
{

    int hash[256];
    fill(hash, hash + 256, -1);
    int maxLen = 0;
    int left = 0;
    int right = 0;
    int n = str.length();

    while (right < n)
    {
        if (hash[str[right]] != -1)
        {
            if (hash[str[right]] >= left)
            {
                left = hash[str[right]] + 1;
            }
        }

        hash[str[right]] = right;
        int len = right - left + 1;
        maxLen = max(maxLen, len);

        right++;
    }
    return maxLen;
}

int main()
{

    cout << "Enter the string: ";

    string s;

    cin >> s;

    int ans = LongestSubArray(s);
    cout << "Longest subarray is: " << ans << endl;

    return 0;
}
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
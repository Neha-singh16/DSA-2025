// // brute force
// #include <bits/stdc++.h>
// using namespace std;

// bool LinearSearch(vector<int> &arr, int key)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int LongestConsecutiveSeq(vector<int> &arr, int n)
// {
//     int longest = 1;

//     for (int i = 0; i < n; i++)
//     {
//         int target = arr[i];
//         int maxi = 1;
//         while (LinearSearch(arr, target + 1) == true)
//         {
//             target = target + 1;
//             maxi++;
//         }
//         longest = max(longest, maxi);
//     }
//     return longest;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     int ans = LongestConsecutiveSeq(arr, n);

//     cout << "Longest Consequestiv seq is :";
//     cout << ans;

//     return 0;
// }

// // better approach
// #include <bits/stdc++.h>
// using namespace std;

// int LongestConsecutiveSeq(vector<int> &arr, int n)
// {
//     int longest = 1;
//     int cnt = 0;
//     int lastSmaller = INT_MIN;
//     sort(arr.begin() , arr.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] - 1 == lastSmaller)
//         {
//             cnt++;
//             lastSmaller = arr[i];
//         }
//         else if (arr[i] != lastSmaller)
//         {
//             cnt = 1;
//             lastSmaller = arr[i];
//         }
//         longest = max(longest, cnt);
//     }
//     return longest;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     int ans = LongestConsecutiveSeq(arr, n);

//     cout << "Longest Consequestiv seq is :";
//     cout << ans;

//     return 0;
// }

// better approach
#include <bits/stdc++.h>
using namespace std;

int LongestConsecutiveSeq(vector<int> &arr, int n)
{
    unordered_set<int> st;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for(auto it : st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                cnt++;
                x = x+1;
            }
            longest = max(longest , cnt);
        }
    }
    return longest;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr[i];
    }

    int ans = LongestConsecutiveSeq(arr, n);

    cout << "Longest Consequestiv seq is :";
    cout << ans;

    return 0;
}

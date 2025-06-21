
// Brute force 1
#include <bits/stdc++.h>
using namespace std;

int LongestSubArray(int arr[], int n , int key)
{
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for(int k = i;k <= j ;k++){
                sum += arr[k];

            }
            if(sum == key){
                len = max(len , j-i+1);

            }

        }

    }
    return len;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr[i];
    }

int key;
cout << "Enter the target sum: ";
cin>> key;

    int ans = LongestSubArray(arr, n ,  key);
    cout << "Longest subarray is: " << ans << endl;

    return 0;
}


// Brute force 2
#include <bits/stdc++.h>
using namespace std;

int LongestSubArray(int arr[], int n, int key)
{
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];

            if (sum == key)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the target sum: ";
    cin >> key;

    int ans = LongestSubArray(arr, n, key);
    cout << "Longest subarray is: " << ans << endl;

    return 0;
}



// Better approach
#include <bits/stdc++.h>
using namespace std;

int LongestSubArray(int arr[], int n, int key)
{

    map<long long, int> prefix_sum;
    int maxLen = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == key)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - key;

        if (prefix_sum.find(rem) != prefix_sum.end())
        {
            int len = i - prefix_sum[rem];
            maxLen = max(maxLen, len);
        }
        if (prefix_sum.find(sum) == prefix_sum.end())
        {

            prefix_sum[sum] = i;
        }
    }
    return maxLen;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the target sum: ";
    cin >> key;

    int ans = LongestSubArray(arr, n, key);
    cout << "Longest subarray is: " << ans << endl;

    return 0;
}

// Optimal approach
#include <bits/stdc++.h>
using namespace std;

int LongestSubArray(int arr[], int n, int key)
{

    int left = 0;
    int right = 0;
    int maxLen = 0;
    long long sum = arr[0];

    while (right < n)
    {
        while (left <= right && sum > key)
        {
            sum -= arr[left];
            left++;
        }

        if(sum == key){
            maxLen = max(maxLen , right - left +1);
        }
        right++;
        if(right < n){ 
            sum += arr[right];
        }
    }
    return maxLen;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the target sum: ";
    cin >> key;

    int ans = LongestSubArray(arr, n, key);
    cout << "Longest subarray is: " << ans << endl;

    return 0;
}
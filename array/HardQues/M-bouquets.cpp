// #include <bits/stdc++.h>
// using namespace std;

// bool possibleBouquets(const vector<int>& bloomDay, int m, int k, int days) {
//     int cnt = 0;
//     int bouquets = 0;
//     for (int b : bloomDay) {
//         if (b <= days) {
//             cnt++;
//         } else {
//             bouquets += cnt / k;
//             cnt = 0;
//         }
//     }
//     bouquets += cnt / k;
//     return bouquets >= m;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m, k;
//     cin >> n >> m >> k;

//     vector<int> bloomDay(n);
//     for (int i = 0; i < n; i++) {
//         cin >> bloomDay[i];
//     }

//     long long need = 1LL * m * k;
//     if (need > n) {
//         cout << "Not possible\n";
//         return 0;
//     }

//     int mini = *min_element(bloomDay.begin(), bloomDay.end());
//     int maxi = *max_element(bloomDay.begin(), bloomDay.end());

//     for (int day = mini; day <= maxi; day++) {
//         if (possibleBouquets(bloomDay, m, k, day)) {
//             cout << "Minimum days: " << day << "\n";
//             return 0;
//         }
//     }

//     cout << "Not possible\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int days, int m, int k)
{
    int n = arr.size();
    int cnt = 0;
    int noOfDays = 0;

    for(int i = 0; i < n ; i++){
        if(arr[i] <= days){
            cnt++;
        }else{
            noOfDays += (cnt/k);
            cnt = 0;
        }

    }
       noOfDays += (cnt/k);
       return noOfDays >= m;
    
}
int roseGarden(vector<int> arr, int k, int m)
{
    int n = arr.size();
    int val = m * 1ll * k;
    if (val > n)
        return -1;

    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    int low = mini, high = maxi;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (possible(arr, mid , m ,k))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {7, 7, 7, 7, 14, 12, 13, 7};
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}

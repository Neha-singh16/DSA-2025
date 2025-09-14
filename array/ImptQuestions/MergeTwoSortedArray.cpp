
#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {
 int left = 0; 
 int right = 0;
 vector<long long> ans;
 ans.reserve(n+m);
 
 while(left < n && right < m){
    if(arr1[left] < arr2[right]){
        ans.push_back(arr1[left]);
        left++;
    }else{
        ans.push_back(arr2[right]);
        right++;

    }
}

    while(left < n){
        ans.push_back(arr1[left]);
        left++;
    }

    while(right < m){
        ans.push_back(arr2[right]);
        right++;
    }

    // for (int i = 0; i < n; ++i)     arr1[i]   = ans[i];
    // for (int i = 0; i < m; ++i)     arr2[i]   = ans[n + i];

    for(int i = 0; i < (n+m) ; i++){
        if(i < n){
            arr1[i] = ans[i];
        }else{
            arr2[i-n] = ans[i];
        }
    }

 }

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}


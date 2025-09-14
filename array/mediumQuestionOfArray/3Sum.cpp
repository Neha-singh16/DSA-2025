
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>  ThreeSum(int arr[], int n)
{
vector<vector<int>> ans;
 for(int i = 0; i< n; i++){
    for(int j = i+1 ;  j<n ;j++){
       vector<int> temp;
        for(int k =  j+1; k<n ; k++){
             
            if(arr[i]+arr[j]+arr[k] == 0){
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
            }
        }
        if (!temp.empty()) {
            ans.push_back(temp);
        }
    }
 }
 return ans;
}
// NO

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

  

    vector<vector<int>> ans = ThreeSum(arr, n);
    if (!ans.empty())
    {
        for (const auto& triplet : ans) {
            cout << "Triplet: " << triplet[0] << "," << triplet[1] << "," << triplet[2] << endl;
        }
    }
    else
    {
        cout << "No three sum solution found." << endl;
    }

    return 0;
}


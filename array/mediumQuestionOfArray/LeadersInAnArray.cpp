#include <bits/stdc++.h>
using namespace std;

vector<int> LeaderElements(int arr[], int n)
{
vector<int> leader;
 int current_max = arr[n-1];
 leader.push_back(current_max);

 for(int i = n-2; i >= 0; --i){
    if(arr[i] > current_max){
        leader.push_back(arr[i]);
        current_max = arr[i];
    }
 }

 return leader;
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

   
    vector<int> leaders = LeaderElements(arr, n);
    
  for(int i = leaders.size()-1;i>=0;i--){
      
      cout<<leaders[i]<<" ";
  }
    
     cout << "\n";

    return 0;
}
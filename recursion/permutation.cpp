#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

void permute(vector<int> &arr, int index)

{
    if (index == arr.size())
    {
        print(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        permute(arr, index + 1);
        swap(arr[index], arr[i]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    cout << "All permutations:\n";
    permute(arr, 0);

    return 0;
}

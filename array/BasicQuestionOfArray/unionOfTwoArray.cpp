// //Brute force Approach
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> Union(int arr1[], int arr2[], int n1, int n2)
// {
//     set<int> st;
//     for (int i = 0; i < n1; i++)
//     {
//         st.insert(arr1[i]);
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         st.insert(arr2[i]);
//     }
//     vector<int> temp;
//     for (auto it : st)
//     {
//         temp.push_back(it);
//     }
//     for (int i = 0; i < temp.size(); i++)
//     {
//         cout << temp[i] << " ";
//     }
//     cout << endl;

//     return temp;
// }

// int main()
// {
//     int n1;
//     cout << "Enter the number of elements: ";
//     cin >> n1;
//     int arr1[n1];
//     for (int i = 0; i < n1; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr1[i];
//     }

//     int n2;
//     cout << "Enter the number of elements: ";
//     cin >> n2;
//     int arr2[n2];
//     for (int i = 0; i < n2; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr2[i];
//     }

//     Union(arr1, arr2, n1, n2);
//     return 0;
// }

// Optimal Approach
#include <bits/stdc++.h>
using namespace std;

vector<int> Union(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> union_arr;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (union_arr.size() == 0 || arr1[i] != union_arr.back())
            {
                union_arr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (union_arr.size() == 0 || arr2[j] != union_arr.back())
            {
                union_arr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n1){
         if (union_arr.size() == 0 || arr1[i] != union_arr.back())
            {
                union_arr.push_back(arr1[i]);
            }
            i++;
    }
    while(j <  n2){
          if (union_arr.size() == 0 || arr2[j] != union_arr.back())
            {
                union_arr.push_back(arr2[j]);
            }
            j++;
    }
    for (int k = 0; k < union_arr.size(); k++) {
        cout << union_arr[k] << " ";
    }
    cout << endl;
    return union_arr;
}

int main()
{
    int n1;
    cout << "Enter the number of elements: ";
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter the number of elements: ";
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter the element: " << i + 1 << ": ";
        cin >> arr2[i];
    }

    Union(arr1, arr2, n1, n2);
    return 0;
}
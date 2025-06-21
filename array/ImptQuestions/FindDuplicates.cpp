//Brute force 
// #include <bits/stdc++.h>
// using namespace std;

// int FindDuplicates(vector<int> &arr)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cout << arr[i] << " ";
//                 break;
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     vector<int> arr1(n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element n " << i + 1 << ": ";
//         cin >> arr1[i];
//     }

//     FindDuplicates(arr1);

//     return 0;
// }


//Better appraoch
#include <bits/stdc++.h>
using namespace std;

vector<int> FindDuplicates(vector<int> arr)

{
    vector<int> ans;
    unordered_map<int,int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
     if(mpp.find(arr[i]) != mpp.end()){ 
        if(mpp[arr[i]] == 1){
            ans.push_back(arr[i]);
        }
     } 
     mpp[arr[i]]++;  
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr1(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element n " << i + 1 << ": ";
        cin >> arr1[i];
    }

    vector<int> val = FindDuplicates(arr1);
    for (int i = 0; i < val.size(); i++)
    {
        // You can print or process the elements here, for example:
        cout << val[i] << " ";
    }
    cout << endl;

    return 0;
}


// //optimal approach
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> FindDuplicates(vector<int> arr)
// {
//     vector<int> ans;
//     for(int i = 0;i < arr.size() ; i++){
//         int index = abs(arr[i]) - 1;
//         if(arr[index] < 0){
//             ans.push_back(abs(arr[i]));
//         }else{
//             arr[index] = -arr[index];
//         }
//     }
//     return ans;
    
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     vector<int> arr1(n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element n " << i + 1 << ": ";
//         cin >> arr1[i];
//     }

//     vector<int> val = FindDuplicates(arr1);
//     for (int i = 0; i < val.size(); i++)
//     {
//         // You can print or process the elements here, for example:
//         cout << val[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


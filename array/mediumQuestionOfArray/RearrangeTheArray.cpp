
// // Brute Force Approach
// #include <bits/stdc++.h>
// using namespace std;

// void RearrangeElementBySign(int arr[], int n)
// {

//     vector<int> pos , neg;
//     for(int i = 0 ; i< n ; i++){
//         if(arr[i] > 0){
//             pos.push_back(arr[i]);
//         }
//         else{
//             neg.push_back(arr[i]);
//         }
//     }
//     for(int i = 0 ; i< n/2 ; i++){
//         arr[i*2] = pos[i];
//         arr[i*2+1] = neg[i];
//     }

// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     RearrangeElementBySign(arr, n);
//     cout << "Rearranged array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// Optimal Approach
#include <bits/stdc++.h>
using namespace std;

void RearrangeElementBySign(int arr[], int n)
{
    vector<int> ans(n);
    int pos = 0;
    int neg = 1;
    for(int i = 0 ;i < n ;i++){
        if(arr[i] < 0){
            ans[neg] = arr[i];
            neg += 2;
        }else{
            ans[pos] = arr[i];
            pos += 2;
        }
    }
    for(int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
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

    RearrangeElementBySign(arr, n);
    cout << "Rearranged array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



// // Optimal Approach(varient - 2)
// #include <bits/stdc++.h>
// using namespace std;

// void RearrangeElementBySign(int arr[], int n)
// {

//     vector<int> pos, neg;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             pos.push_back(arr[i]);
//         }
//         else
//         {
//             neg.push_back(arr[i]);
//         }
//     }
//     if (neg.size() < pos.size())
//     {
//         for (int i = 0; i < neg.size(); i++)
//         {
//             arr[i * 2] = pos[i];
//             arr[i * 2 + 1] = neg[i];
//         }
//         int index = neg.size() * 2;
//         for (int i = neg.size(); i < pos.size(); i++)
//         {
//             arr[index] = pos[i];
//             index++;
//         }
//     }
//     else
//     {
//         for (int i = 0; i < pos.size(); i++)
//         {
//             arr[i*2] = pos[i];
//             arr[i*2+1] = neg[i]; 
//         }
//         int index = pos.size()*2;
//         for(int i = pos.size() ; i < neg.size() ; i++){
//             arr[index] = neg[i];
//             index++;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element: " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     RearrangeElementBySign(arr, n);
//     cout << "Rearranged array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
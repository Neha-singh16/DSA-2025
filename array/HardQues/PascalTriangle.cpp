// #include <bits/stdc++.h>
// using namespace std;
// int nCr(int n, int r)
// {
//     int res = 1;
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i+1);
//     }
//     return res;
// }

// int pascalTriangle(int r, int c)
// {
//     for (int i = 0; i <= r; i++)
//     {
//         int element = nCr(r - 1, c - 1);
//        return element;
//     }

// }

// int main()
// {
//     int r; // row number
//     cout << "enter the row number (r): ";
//     cin >> r;
//     int c; // col number
//     cout << "enter the column number (c): ";
//     cin >> c;
//     int element = pascalTriangle(r , c);
//     cout << "The element at position (r,c) is: "
//          << element << "n";
//     return 0;
// }


// Given the row number n. Print the n-th row of Pascal’s triangle.
// #include <bits/stdc++.h>
// using namespace std;
// int nCr(int n, int r)
// {
//     int res = 1;
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i+1);
//     }
//     return res;
// }

// void pascalTriangle(int r)
// {
//     for (int c = 1; c <= r; c++)
//     {
//        cout << nCr(r - 1, c - 1) << " ";

//     }
//     cout << "n";

// }

// int main()
// {
//     int r; // row number
//     cout << "enter the row number (r): ";
//     cin >> r;

//     pascalTriangle(r);

//     return 0;
// }



// // Given the row number n. Print the n-th row of Pascal’s triangle.
// #include <bits/stdc++.h>
// using namespace std;

// int pascalTriangle(int n)
// {
//     long long res = 1;
//     cout << res << " ";
//     for (int i = 1; i < n; i++)
//     {
//         res = res * (n - i);
//         res = res / i;
//          cout << res << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int r; // row number
//     cout << "enter the row number (r): ";
//     cin >> r;

//     pascalTriangle(r);

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int nCr(int n, int r)
// {
//     int res = 1;
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i+1);
//     }
//     return res;
// }

// vector<vector<int>> pascalTriangle(int n)
// {
    
// vector<vector<int>> ans;
// for(int row = 1; row <= n; row++){
//     vector<int> tempList;
//     for(int col = 1; col <= row; col++){
//         tempList.push_back(nCr(row - 1 , col - 1));
        
//     }
//     ans.push_back(tempList);
// }

// return ans;

// }

// int main()
// {
//     int r; // row number
//     cout << "enter the row number (r): ";
//     cin >> r;
  
//     vector<vector<int>> ans = pascalTriangle(r);
//     // cout << "The element at position (r,c) is: "
//     //      << element << "n";
//       for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }
//     return 0;

   
// }




#include <bits/stdc++.h>
using namespace std;
vector<int> generateTheValue(int r)
{
    long long res = 1;
   vector<int> resRow;
   resRow.push_back(1);
    for (int i = 1; i < r; i++)
    {
        res = res * (r - i);
        res = res / i;
        resRow.push_back(res);
    }
    return resRow;
}

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> ans;
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateTheValue(row));
    }
    return ans;
}

int main()
{
    int r; // row number
    cout << "enter the row number (r): ";
    cin >> r;
  
    vector<vector<int>> ans = pascalTriangle(r);
    for (const auto& row : ans) {
        for (auto ele : row) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;

   
}

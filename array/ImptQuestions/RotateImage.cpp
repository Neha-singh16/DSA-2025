
// //Better approach
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> RotateImage(vector<vector<int>> &matrix, int row, int col)
// {
//      vector<vector<int>> ans(row , vector<int>(col , 0));
//      for(int i = 0; i< row ; i++){
//         for(int j = 0; j < col; j++){
//             ans[j][row-1-i] = matrix[i][j];

//         }
//      }
// return ans;
// }

// int main()
// {
//     int rows, cols;
//     cout << "Enter the rows: ";
//     cin >> rows;

//     cout << "Enter the columns: ";
//     cin >> cols;

//     vector<vector<int>> matrix(rows, vector<int>(cols));
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << "Element at [" << i << "][" << j << "]: ";
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nMatrix\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {

//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     vector<vector<int>> ans = RotateImage(matrix, rows, cols);
//     cout << "\nModified Matrix:\n";
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// Better approach
#include <bits/stdc++.h>
using namespace std;

void RotateImage(vector<vector<int>> &matrix, int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < row; i++)
    {

        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    int rows, cols;
    cout << "Enter the rows: ";
    cin >> rows;

    cout << "Enter the columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    RotateImage(matrix, rows, cols);
    cout << "\nModified Matrix:\n";
    for (const auto &it : matrix)
    {
        for (const auto &ele : it)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }

    return 0;
}
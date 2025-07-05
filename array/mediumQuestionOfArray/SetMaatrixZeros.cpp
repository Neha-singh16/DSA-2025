// #include <bits/stdc++.h>
// using namespace std;

// void markRow(vector<vector<int>> &matrix, int row, int col, int i)
// {
//     for (int j = 0; j < col; j++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>> &matrix, int row, int col, int j)
// {
//     for (int i = 0; i < col; i++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// vector<vector<int>> ZeroMatrix(vector<vector<int>> &matrix, int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 markRow(matrix, row, col, i);
//                 markCol(matrix, row, col, j);
//             }
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (matrix[i][j] == -1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     return matrix;
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

//     vector<vector<int>> ans = ZeroMatrix(matrix, rows, cols);
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




//Better approach
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ZeroMatrix(vector<vector<int>> &matrix, int row, int col)
{
    int rowss[row] = {0};
    int colss[col] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowss[i] = 1;
                colss[j] = 1;
              
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (rowss[i]|| colss[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
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

    vector<vector<int>> ans = ZeroMatrix(matrix, rows, cols);
    cout << "\nModified Matrix:\n";
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }

    return 0;
}
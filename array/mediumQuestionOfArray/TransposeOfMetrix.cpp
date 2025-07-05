

// // Optimal approach
// #include <bits/stdc++.h>
// using namespace std;

// void TransposeOfMatrix(vector<vector<int>> &matrix, int row, int col)
// {

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = i + 1; j < col; j++)
//         {

//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
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

//     TransposeOfMatrix(matrix, rows, cols);
//     cout << "\nModified Matrix:\n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }




// Better approach
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> TransposeOfMatrix(const vector<vector<int>> &matrix, int row, int col)
{
    vector<vector<int>> matrix1(col, vector<int>(row));
    for(int i = 0 ; i < row ; i ++){
        for(int j = 0 ;j < col ; j++){
            matrix1[j][i] = matrix[i][j];
        }
    }
    return matrix1;
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

    TransposeOfMatrix(matrix, rows, cols);
    cout << "\nModified Matrix:\n";
    vector<vector<int>> transposed = TransposeOfMatrix(matrix, rows, cols);
    cout << "\nModified Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << "\n";
    }
}
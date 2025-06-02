// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }

//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         for (int j = 2; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int n = 9; // number of columns (stars + spaces)
    for (int i = 1; i <= 3; i++) // fixed 3 rows
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 2 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

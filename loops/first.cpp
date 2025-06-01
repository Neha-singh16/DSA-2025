#include <iostream>
using namespace std;

// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++) // rows count
//     {
//         for (int j = 0; j < n - i + 1; j++) //left space count
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2 * i + 1; j++) // print star
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < n - i + 1; j++) // right space count
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// // }

// #include <iostream>
// using namespace std;

int main()
{
    int n = 4;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     char ch = 'A';
    //     int breakpoint = (2 * i + 1) / 2;
    //     for (int j = 1; j <= 2 * i + 1; j++)

    //     {
    //         cout << ch;
    //         if (j <= breakpoint)
    //             ch++;
    //         else
    //             ch--;
    //     }
    //     for (int j = 1; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    for(int i=0 ;i <= n;i++){
        // char ch='E';
        for(char ch='E' - i ; ch<='E' ; ch++){
            cout << ch << " ";
        }

    cout << endl;
    }
    return 0;
}
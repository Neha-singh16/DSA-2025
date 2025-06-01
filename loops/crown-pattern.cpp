// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     // int space = 2 * (n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         // number
//         for (int j = 1; j <= i+1; j++)
//         {
//             cout << j;
//         }
//         for (int j = 1; j <= 2*(n - i - 1); j++)
//         {
//             cout << " ";
//         }
//         for (int j = i+1; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//         // space -= 2;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int count = 1;

//     for (int i = 0; i <= n; i++)
//     {
//         // number
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " " << count++ << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     // int count = 1;
//     // int space = 2 * (n - 1);
//     for (int i = 0; i <= n; i++)
//     {
//         // number
//         for (char ch = 'A' ; ch <= 'A' + i ; ch++)
//         {
//             cout <<" " << ch << " " ;
//         }

//         cout << endl;
//         // space -= 2;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i <= n; i++)
    {
        char ch = 'A'+ i;
        // number
        for (int j = 0; j <= i; j++)
        {
            cout << " " << ch << " ";
        }

        cout << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= n; i++)
//     {
//         // number
//         // for (int j = 0; j <= n - i + 1; j++)
//         // {
//         //     cout << " ";
//         // }

//         for (char ch = 'A'; ch <= 'A' + (n-i); ch++)
//         {
//             if (ch > i) ch = 'A';
//             cout << ch;
//         }
//         //  for (int j = 0; j <= n - i + 1; j++)
//         // {
//         //     cout << " ";
//         // }

//         cout << endl;
//         // space -= 2;
//     }

//     return 0;
// }
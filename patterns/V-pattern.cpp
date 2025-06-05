#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // upper half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            char ch = 'A' + j;
            if (i == j)
            {
                cout << ch;
            }
            else
            {
                cout << " ";
            }
        }

        int spaces = 2 * (n - i - 1) - 1;
        if (spaces >= 0)
        {
            for (int j = 0; j <= spaces; j++)
            {
                cout << " ";
            }
        }

        char ch = 'A' + i;
        if (i != n - 1)
        {
            cout << ch;
        }
         cout << endl;
    }
   
    for (int i = 0; i <= n; i++)
    {
      
        
        int spaces = 2 * (n -i-1) - 1;
        if (spaces >= 0)
        {
            for (int j = 0; j <= spaces; j++)
            {
                cout << " ";
            }
        }

          for (int j = 0; j < n; j++)
        {
            char ch = 'A' + j;
            if (i == j)
            {
                cout << ch;
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

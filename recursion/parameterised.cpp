// Parameterised Recurssion
#include <iostream>
using namespace std;

void printSum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }

    printSum(i - 1, sum + i);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printSum(n, 0);

    return 0;
}

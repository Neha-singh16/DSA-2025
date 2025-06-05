// #include<iostream>
// using namespace std;

// void sumOfDigit(int n , int sum){
//   if(n < 1){
//     cout << sum;
//     return;
//   }

//   sumOfDigit(n-1 , sum+n);
// }

// int main(){

//     int n;
//     cout<<"Enter number: ";
//     cin >> n;

//     sumOfDigit( n , 0);

//     return 0;
// }

#include <iostream>
using namespace std;

void expOfDigit(int n, int multi, int x)
{
    if (n == 0)
    {
        cout << multi;
        return;
    }

    expOfDigit(n - 1, multi * x, x);
}

int main()
{

    int n;
    cout << "Enter number: ";
    cin >> n;

    expOfDigit(n, 1, 2);

    return 0;
}
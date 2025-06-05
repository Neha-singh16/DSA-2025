
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n == 0){
//         return 0;
//     }
//     if( n == 1) return 1;

//     return n * factorial(n-1);
// }

// int main(){
//  int n = 5;
//  cout << "Enter the number: ";
//  cin >> n;

//  cout << factorial(n);

//     return 0;
// }

#include <iostream>
using namespace std;
int fact(int i, int multiply)
{
    if ( i == 1){
        cout << multiply;
        return 1;
    }

   
    fact(i - 1, multiply * i);
}

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    fact(n, 1);

    return 0;
}
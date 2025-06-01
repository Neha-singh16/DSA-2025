#include <iostream>
using namespace std;

int main()
{

    int a = 40;
    int b = 20;
    int gcd= 1;

    // while (a > 0 && b > 0)
    // {
    //     if(a > b) a = a-b;
    //     else  b = b - a;

       
    // }
    //  if(a == 0) cout << b;
    //  else cout << a;

    for(int i = min(a , b) ; i >= 1;i++){
        if(a%i==0 && b%i==0) gcd = i;
        break;
    }
    cout << gcd;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n = 153;
    // int count = 0;
    int addUp = 0;
    int dup = n;
    // int reverse = 0; 

    while (n > 0)
    {
        int lastDigit = n % 10;
        cout << lastDigit;
        int multiple = lastDigit * lastDigit * lastDigit;
        addUp += multiple;

        
        // count++;
        n = n/10;

        // reverse = (reverse * 10) + lastDigit;
    }
    cout << endl;
    cout << "Armstrong: " << addUp;
     cout << endl;

    if(dup == addUp){
        cout<< "true";
    }else{
        cout << "false";
    }

    return 0;
}
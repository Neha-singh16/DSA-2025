
#include <bits/stdc++.h>
using namespace std;

int SquareOfSum(int n1)
{
    int sum = 0;
    while(n1 > 0){
        int lastD = n1%10;
        int sqr = lastD * lastD;
        sum += sqr;
        n1 =  n1 /10;
    }

    return sum;

}

int main()
{
    int n1;
    cout << "Enter the number of elements: ";
    cin >> n1;
  

    int ans = SquareOfSum(n1);
    cout << "The sum of the squares: " << ans << endl;

    return 0;
}

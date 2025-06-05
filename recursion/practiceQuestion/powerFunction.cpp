#include<bits/stdc++.h>
using namespace std;

int power(int n, int k){
    if( k ==  0){
        return 1;
    }

    int half = power(n , k/2);
    if( k % 2 == 0){
        return half * half;
    }else{
        return half *  half * n;
    }
}

int main(){
   
int n; int k;
cout << "Enter the base number: ";
cin >> n;

cout << "Enter the power: ";
cin >> k;

cout << power(n , k);


    return 0;
}
#include <iostream>
using namespace std;

void countNumber(int n , int count){
   if(n<1){
    cout << count;
    return;
   }

   countNumber(n/10 , count+1);
}

int main(){
int n;
cout<< "Enter number: ";
cin >> n;
countNumber(n, 0);



    return 0;
}
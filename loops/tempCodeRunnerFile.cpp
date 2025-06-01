#include<iostream>
using namespace std;

int main(){
  int n = 4;
  for(int i = 0 ;i < 2*n-1; i++){
    for(int j = 0 ; j < i; j++){
        if( i == 0 || i == n-1 || j == 0 || j == n-1 ){
          cout << "4";
        }
    else cout << " ";
        }
        cout << endl;
       
  }



    return 0;
}

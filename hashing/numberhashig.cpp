#include<iostream>
using namespace std;

int main(){
   int n;
   cout <<"Enter the number of elements:";
   cin >> n;

   int arr[n];
   int hash[13] ={0};
   for(int i = 0; i < n; i++){
      cout<<"Enter the element"<<i+1 << ": ";
      cin>> arr[i];
      hash[arr[i]] += 1;
   }

int q;
cout <<"Enter number of queries: ";
cin >> q;
while(q--){
   int number;
   cout<<"Enter number to find frequency: ";
   cin >> number;
  cout<< hash[number] << endl;
}

   return 0;
}
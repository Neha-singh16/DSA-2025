// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= 2 * n - 1; i++)
//     {
//         int stars = i;
//         if (i > n) stars = 2 * n - i;
//         for (int j = 0; j < stars; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }


// // for (int i= 0 ;i <= n ; i++){
// //     for(int j =0 ; j < n-i ;  j++){
// //         cout << "*";
// //     }
// //     cout << endl;
// // }
//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
int n =5;

for(int i = 0 ; i<= n ;i++){
int start = 1;
if(i % 2 == 0) start = 1;
else start = 0; 
    for(int j=0 ; j<=i ; j++){
        cout << start;
        start = 1-start;
    }
    cout << endl;
}


    return 0;
}
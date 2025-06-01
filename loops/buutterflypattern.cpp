#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }

      int space = 2*n-2;

        for(int j=0; j<2*(n-i+1) ; j++){
            cout <<" ";
            if(i < n) space -=2;
            else space +=2;
        }

        for(int j =0 ; j<stars ; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
           
        }
        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
          if (i < n)
                spaces -= 2;
            else
                spaces += 2;
       
    }

    return 0;
}



#include<iostream>
using namespace std;

int main(){
  int n = 4;
  for(int i = 0 ;i < n; i++){
    for(int j = 0 ; j < n; j++){
        if( i == 0 || i == n-1 || j == 0 || j == n-1 ){
          cout << "*";
        }
    else cout << " ";
        }
        cout << endl;
       
  }



    return 0;
}



#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int center = n-1;
    for(int i=0 ; i< 2*n-1 ; i++){
        for(int j = 0 ; j < 2*n-1 ; j++){
           
              int rowDist = (i >= center) ? i - center :  center - i;
              int colDist = (j >= center) ? j -  center : center - j;

              int maxDist = (rowDist>  colDist) ? rowDist : colDist;
              int value = maxDist + 1;

              cout << value << " ";
            }
            cout << endl;
        }
     
    return 0;

}

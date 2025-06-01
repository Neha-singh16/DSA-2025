// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 55;

//     for (int i = 1; i <= n; i++)
//     {
//         int start = i;
//         if (n % start == 0)
//         {
//             cout << "Divisor of n:" << start;
//             cout << endl;
//         }
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 55;
    vector<int> ls;

    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if((n/i) != i){
              ls.push_back(n/i);  
            }
            // cout << "Divisor of n:" << i;
            // cout << endl;
        }
    }
sort(ls.begin(),ls.end());
for(auto it : ls) cout << it << " ";

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a, b, i, x, ma, mi;

    cin >> a >> b;

    if(a > b)
    {
        mi = b;
        ma = a;
    }
    else
    {
        mi = a;
        ma = b;
    }

     if(ma % mi == 0)
     {
         cout << ma << endl;
         return 0;
     }
     else
     {
         for(i = 1; i <= mi; i++)
         {
             x = ma * i;
             if(x % mi == 0)
             {
                 cout << x << endl;
                 return 0;
             }
         }
     }
     return 0;
}

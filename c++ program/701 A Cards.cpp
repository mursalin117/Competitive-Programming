#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, ma = 0, mi = 1000, d;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
     {
         scanf("%d", &a[i]);
         if(ma < a[i]) ma = a[i];
         if(mi > a[i]) mi = a[i];
     }
     d = ma + mi;
     for(i = 0; i < n; i++)
     {
         for(j = 1; j != i && j < n; j++)
         {
             if(a[i] + a[j] == d && a[i] != -1 && a[j] != -1)
             {
                 printf("%d %d\n", i+1, j+1);
                 a[i] = -1;
                 a[j] = -1;
                 break;
             }
         }
     }
     return 0;
}

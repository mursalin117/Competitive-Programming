#include <stdio.h>

int main()
{
     unsigned long int n,m,t,i,j,x;

     scanf("%lu",&t);
     for(i=1; i<=t; i++)
     {
         scanf("%lu",&n);
         if(n%2 != 0 ) printf("Case %lu: Impossible\n",i);
         else
         {
             m=1;
             for(j=0; ; j++)
             {
                 m = m*2;
                 x = n/m;
                 if(x%2 != 0)
                 {
                     printf("Case %lu: %lu %lu\n",i,x,m);
                     break;
                 }
                 else continue;
             }
         }
     }
     return 0;
}

#include <stdio.h>
int main()
{
    int a,b,c,f,s,j;
    scanf("%d%d",&a,&s);
    int ar[a],m[s];
    for(b=0;b<a;b++)
    {
        scanf("%d",&ar[b]);
    }
        for(c=(a-1),j=0;c>=0,j<a;c--,j++)
    {
        m[j]=ar[c];

          printf("%d  ",m[j]);

     }


}

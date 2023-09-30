#include <stdio.h>

int main()
{
    int d,n,s=0,i;
    scanf("%d",&n);
    for(i=5;i>0;i--)
    {
        d=n/i;
        s=s+d;
        n=n%i;
    }
    printf("%d\n",s);
    return 0;
}

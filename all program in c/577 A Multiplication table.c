#include <stdio.h>

int main()
{
    long int i,j,n,x,count=0;
    scanf("%ld%ld",&n,&x);
    for(i=1;i<=n;i++)
    {
        if(x%i==0 && (x/i<=n)) count++;
    }
    printf("%ld\n",count);
    return 0;
}

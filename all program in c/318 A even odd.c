#include <stdio.h>

int main()
{
    long long int n,k,d;
    scanf("%I64d%I64d",&n,&k);
    if(n%2!=0)
    {
        d=(n/2)+1;
    }
    else
    {
        d=n/2;
    }
    if(k<=d)
    {
        if(k%2==0)
        {
            printf("%I64d\n",(2*k)-1);
        }
        else
        {
            printf("%I64d\n",(2*(k-1))+1);
        }
    }
    else
    {
        printf("%I64d\n",(k-d)*2);
    }
    return 0;
}

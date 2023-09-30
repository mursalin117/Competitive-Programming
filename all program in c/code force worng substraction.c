#include <stdio.h>

int main()
{
    long int n,k,i;
    scanf("%ld%ld",&n,&k);
    for(i=0;i<k;i++)
    {
        if(n%10!=0)
        {
            n=n-1;
        }
        else
        {
            n=n/10;
        }
    }
    printf("%ld\n",n);
    return 0;
}

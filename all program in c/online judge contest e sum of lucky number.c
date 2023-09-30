#include <stdio.h>
#include <math.h>

int mark[1000001];

void sieve(int n);

int main()
{
    int n;
    scanf("%d",&n);
    sieve(n);
    return 0;
}

void sieve(int n)
{
    int lucky[1000000],i,j,m;
    begin:
    for(i=1;i<=1000000;i++)
    {
        if(i%2!=0) mark[]
    }
    for(i=0;i<1000000;i++)
    {
        if(mark[i]>0) printf("%d  ",i);
    }
    return;
}


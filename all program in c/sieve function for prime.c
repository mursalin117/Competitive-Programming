#include <stdio.h>
#include <math.h>

int mark[1000000];

void sieve(int n);

int main()
{
    sieve(1000000);
    return 0;
}

void sieve(int n)
{
    int prime[1000000],root,i,j;
    root=sqrt(n)+1;
    for(i=2;i<=root;i++)
    {
        if(mark[i]==0)
        {
            for(j=i+1;j<=1000000;j++)
            {
                if(j%i==0)
                {
                    mark[j]==1;
                }
            }
        }
    }
    j=0;
    for(i=2;i<=1000000;i++)
    {
        if(mark[i]==0)
        {
            printf("%d  ",i);
        }
    }
    return;
}

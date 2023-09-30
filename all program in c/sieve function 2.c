#include <stdio.h>
#include <math.h>
int prime[100];
int mark[100];
int n_prime=0;

void sieve(int n);

int main()
{
    int n,i;
    scanf("%d",&n);
    sieve(n);
    for(i=0;i<n_prime;i++)
    {
        printf("%d ",prime[i]);
    }
    return 0;
}

void sieve(int n)
{
    int i,j,root;
    root=sqrt(n)+1;
    mark[1]=1;
    for(i=2;i<=root;i++)
    {
        if(mark[i]==0)
        {
            for(j=i+1;j<=n;j++)
            {
                if(j%i==0)
                {
                    mark[j]=1;
                }
            }
        }
    }
    j=0;
    for(i=2;i<=n;i++)
    {
        if(mark[i]==0)
        {
            prime[j]=i;
            j++;
        }
    }
    n_prime=j;
    return;
}

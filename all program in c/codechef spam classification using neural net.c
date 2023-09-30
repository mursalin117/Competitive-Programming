#include <stdio.h>

#define ll long int

void spammers(ll n, ll min, ll max);

int main()
{
     ll t,n,i,maxX,minX;

    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld%ld",&n,&minX,&maxX);
        spammers(n, minX, maxX);
    }
    return 0;
}
void spammers(ll n, ll min, ll max)
{
    ll w[n],b[n],i,j,y,count_s=0,count_n_s=0;
    for(i=0; i<n; i++)
    {
        scanf("%ld%ld",&w[i],&b[i]);
        if(i>=1)
        {
            for(j=min; j<=max; j++)
            {
                y=w[i]*j+b[i];
                if(y%2!=0)  count_n_s++;
                else count_s++;
            }
        }
        else continue;
    }
    printf("%ld %ld\n",count_n_s,count_s);
    return;
}

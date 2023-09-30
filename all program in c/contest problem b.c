#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    unsigned long int n,k,j,s=1,count=0,m,d;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lu%lu",&n,&k);
        for(j=1;j<=k;j++)
        {
            s=s*n;
        }
        m=s;
        printf("%lu   \n",m);
        while(m>0)
        {
            m=m/10;
            count++;
        }
        if(count%2==0)
        {
            d=pow(10,count/2);
            printf("Case %d: %lu %lu\n",i,s/d,s%1000);
        }
        else
        {
            d=pow(10,(count/2)+1);
            printf("Case %d: %lu %lu\n",i,s%d,s%1000);
        }
    }
    return 0;
}

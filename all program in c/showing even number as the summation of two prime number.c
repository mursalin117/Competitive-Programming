#include <stdio.h>
#include <math.h>

int main()
{
    int m,n,count,b=0,i,j,x;
    scanf("%d",&n);
    x=(n/2)+1;
    int a[x];
    for(i=2;i<n;i++)
    {
        m=sqrt(i)+1;
        count=0;
        for(j=1;j<m;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
        if(count==1)
        {
            a[b]=i;
            printf("%d\n",a[b]);
            b++;
        }
    }
    for(i=0;i<(x-1);i++)
    {
        for(j=i+1;j<x;j++)
        {
            if((a[i]+a[j])==n)
            {
                printf("%d + %d = %d\n",a[i],a[j],n);
                break;
            }
        }
    }
    return 0;
}

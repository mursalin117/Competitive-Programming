#include <stdio.h>

int main()
{
    int t,i;
    unsigned long int w,j,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lu",&w);
        if(w%2!=0)
        {
            printf("Case %d: Impossible\n",i);
        }
        else
        {
            for(j=3;j<=w;j=j+2)
            {
                if(w%j==0)
                {
                    m=w/j;
                    if(m%2==0)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            printf("Case %d: %lu %lu\n",i,j,m);
        }
    }
    return 0;
}

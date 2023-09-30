#include <stdio.h>

int main()
{
    int n,s,i,count,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&d);
        count=0;
        while(d>0)
        {
            s=d%2;
            if(s==1)
            {
                count++;
            }
            d=d/2;
        }
        if(count%2==0)
        {
            printf("Case %d: even\n",i);
        }
        else
        {
            printf("Case %d: odd\n",i);
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int t,s,i,j,m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        //printf("\n");
        scanf("%d",&n);
        s=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&m);
            if(m>0)
            {
                s=s+m;
            }
            else
            {
                m=0;
                s=m+s;
            }
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}

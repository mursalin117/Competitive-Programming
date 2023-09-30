#include <stdio.h>

int main()
{
    int t,i,n,s,d,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        s=0;
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=1;j<=(n/2);j++)
        {
            printf("donate ");
            scanf("%d",&d);
            s=s+d;
            printf("report\n%d\n",s);
        }
    }
    return 0;
}

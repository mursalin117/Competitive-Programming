#include <stdio.h>

int main()
{
    int n,a,b,i,j,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        s=0;
        if(a<=b)
        {
            for(j=a;j<=b;j++)
            {
                if(j%2!=0) s=s+j;
            }
            printf("Case %d: %d\n",i,s);
        }
        else
        {
            for(j=b;j<=a;j++)
            {
                if(j%2!=0) s=s+j;
            }
            printf("Case %d: %d\n",i,s);
        }
    }
    return 0;
}

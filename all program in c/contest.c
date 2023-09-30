#include<stdio.h>

int main()
{
    int a,b,i,n;
    scanf("%d",&n);
    if(n<=125 && n>0)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&a,&b);
            printf("Case %d: %d\n",i,(a+b));
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int a,b,i,n;
    scanf("%d",&n);
    if(n<=25 && n>0)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&a,&b);
            printf("Case %d: %d\n",i,((abs(a-b)*4)+a*4+19));
        }
    }
    return 0;
}


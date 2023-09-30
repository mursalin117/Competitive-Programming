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
            if(a>0 && b>0 && a>b)
            {
                printf("Case %d: %d\n",i,((a-b)*4+a*4+9+10));
            }
            else if(a>0 && b>0 && b>=a)
            {
                 printf("Case %d: %d\n",i,((b-a)*4+a*4+9+10));
            }
        }
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int a,b,m,i,s;
    scanf("%d%d",&a,&b);
    while(a>0 && b>0)
    {
        if(a>b)
        {
            m=a;
            a=b;
            b=m;
        }
        s=0;
        for(i=a;i<=b;i++)
        {
            printf("%d ",i);
            s=s+i;
        }
        printf("Sum=%d\n",s);
        scanf("%d%d",&a,&b);
    }
    return 0;
}

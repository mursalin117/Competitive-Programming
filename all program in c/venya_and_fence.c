#include <stdio.h>

int main()
{
    int n,h,x,i,s=0;
    scanf("%d%d",&n,&h);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x<=h)
        {
            s=s+1;
        }
        if(x>h)
        {
            s=s+2;
        }
    }
    printf("%d\n",s);
    return 0;
}

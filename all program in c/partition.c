#include<stdio.h>

int main()
{
    int n,x,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        s=abs(x)+s;
    }
    printf("%d\n",s);
    return 0;
}

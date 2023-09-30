#include<stdio.h>

int main()
{
    int n,i,j,a,x;
    unsigned long long int s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        scanf("%d",&a);
        s=0;
        for(j=1;j<=a;j++)
        {
            scanf("%d",&x);
            s=s+x;
        }
        printf("Case %d: %lld\n",i,s);
    }
    return 0;
}

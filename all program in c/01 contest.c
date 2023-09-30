#include <stdio.h>

int main()
{
    int t,n,m,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        m=(n*(n-1))/2;
        printf("%d\n",m);
    }
    return 0;
}

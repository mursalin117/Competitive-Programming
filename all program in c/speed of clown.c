#include <stdio.h>

int main()
{
    int n,i,t,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n],m=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i]);
            if(m<a[i])
            {
                m=a[i];
            }
        }
        printf("Case %d: %d\n",i,m);
    }
    return 0;
}

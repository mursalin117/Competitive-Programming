#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==a[j])
            {
                printf("%d ",j);
                break;
            }
            else continue;
        }
    }
    printf("\n");
    return 0;
}

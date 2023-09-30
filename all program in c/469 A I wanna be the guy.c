#include <stdio.h>

int n,count[105];

int main()
{
    int x,y,i,j;
    scanf("%d",&n);
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        for(j=1;j<=n;j++)
        {
            if((j)==a[i])
            {
                count[j]++;
                break;
            }
        }
    }
    scanf("%d",&y);
    int b[y];
    for(i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
        for(j=1;j<=n;j++)
        {
            if((j)==b[i])
            {
                count[j]++;
                break;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(count[i]>=1) continue;
        else
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    return 0;
}

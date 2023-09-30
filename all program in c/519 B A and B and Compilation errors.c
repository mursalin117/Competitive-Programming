#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n-1],c[n-2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n-2;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i]==b[j])
            {
                break;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-2;j++)
        {
            if(b[i]!=c[j])
            {
                printf("%d\n");
                return 0;
            }
        }
    }
    return 0;
}

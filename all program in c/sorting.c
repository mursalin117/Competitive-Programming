#include <stdio.h>

int main()
{
    int n,i,j,k,m=0,x;
    scanf("%d",&n);
    int a[n],min[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(k=0;k<n;k++)
    {
        if(a[k]<=a[k+1])
        {
            a[k]=min[k];
        }
    }


    for(x=0;x<n;x++)
    {
        printf("%d ",min[x]);
        printf("%d ",min[(n-1)-x]);
    }
    return 0;
}

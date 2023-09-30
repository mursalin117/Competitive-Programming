#include <stdio.h>

int main()
{
    int n,i,j,l,m,h,k,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    m=a[k];
    a[k]=a[n-1];
    a[n-1]=m;
    for(j=0;j<(n-1);j++)
    {
        for(l=j+1;l<(n-1);l++)
        {
            if(a[j]>a[l])
            {
                m=a[j];
                a[j]=a[l];
                a[l]=m;
            }
        }
    }
    m=a[k];
    a[k]=a[n-1];
    a[n-1]=m;
    for(x=k+1;x<n;x++)
    {
        for(y=x+1;y<n;y++)
        {
            if(a[x]>a[y])
            {
                m=a[x];
                a[x]=a[y];
                a[y]=m;
            }
        }
    }
    for(h=0;h<n;h++)
    {
        printf("%d ",a[h]);
    }
    return 0;
}


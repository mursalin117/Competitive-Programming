#include <stdio.h>

int main()
{
    int n,i,j,l,m,h;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<(n-1);j++)
    {
        for(l=j+1;l<n;l++)
        {
            if(a[j]>a[l])
            {
                m=a[j];
                a[j]=a[l];
                a[l]=m;
            }
        }
    }
    for(h=0;h<n;h++)
    {
        printf("%d \n",a[h]);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

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
            if(a[j]<a[i])
            {
                m=a[j];
                a[j]=a[i];
                a[i]=m;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>a[0])
        {
            printf("%d\n",a[i]);
            return 0;
        }
    }
}

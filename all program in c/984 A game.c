#include <stdio.h>

int main()
{
    int n,i,m,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }

    if(n%2!=0)
    {
        printf("%d\n",a[(n/2)]);
    }
    else
    {
        printf("%d\n",a[(n/2)-1]);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int t,i,j,k,m,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n],s=0;
        scanf("%d",&a[0]);
        for(j=1;j<n;j++)
        {
            scanf("%d",&a[j]);
            for(k=0;k<j;k++)
            {
                if(a[j]<a[k])
                {
                    m=a[j];
                    a[j]=a[k];
                    a[k]=m;
                }
            }
        }
        for(j=0;j<n-1;j++)
        {
            s=s+abs(a[j+1]-a[j]);
        }
        printf("%d\n",s);
    }
    return 0;
}

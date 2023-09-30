#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,i,j,min,c_m;
    scanf("%d%d",&n,&m);
    int a[m];
    scanf("%d",&a[0]);
    for(i=1;i<m;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                c_m=a[i];
                a[i]=a[j];
                a[j]=c_m;
            }
        }
    }
    min=a[n-1]-a[0];
    for(i=1;i<m;i++)
    {
        if((min>(a[i+n-1]-a[i])) && ((i+n-1)<m))
        {
            min=a[i+n-1]-a[i];
        }
    }
    printf("%d\n",min);
    return 0;
}

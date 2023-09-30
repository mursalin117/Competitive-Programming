#include <stdio.h>

int main()
{
    int n,i,j,s,max,m,count=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    max=a[0];
    s=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
        if(max<a[i]) max=a[i];
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
    s=s-max;
    if(max>s) printf("1\n");
    else
    {
        for(i=1;i<n;i++)
        {
            s=s-a[n-1-i];
            max=max+a[n-1-i];
            count++;
            if(max>s)
            {
                printf("%d\n",count+1);
                return 0;
            }
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n,i,j,m,l,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
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
    for(i=0;i<n;i++)
    {
        s=a[i];
        l=a[i+1];
        while(s>1)
        {
            m=l%s;
            if(m>0)
            {
                l=s;
                s=m;
            }
            else
            {
                l=l;
                s=s;
                break;
            }
        }
    }
}

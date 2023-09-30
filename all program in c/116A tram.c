#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,m;
    scanf("%d",&n);
    int s[n],a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(i==0)
        {
            s[i]=b[i]-a[i];
        }
        else
        {
            s[i]=abs((s[i-1]-a[i])+b[i]);
        }
    }
    m=0;
    for(i=0;i<n-1;i++)
    {
        if(m<=s[i])
        {
            m=s[i];
        }
    }
    printf("%d\n",m);
    return 0;
}

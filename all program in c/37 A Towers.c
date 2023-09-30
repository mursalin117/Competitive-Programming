#include <stdio.h>

int main()
{
    int n,i,count=0,m;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    m=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(m<a[i])
        {
            m=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==m) count++;
    }
    printf("%d %d\n",m,count);
    return 0;
}

#include <stdio.h>

int main()
{
    int n,m=0,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(m<a[i])
        {
            m=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        s=s+(m-a[i]);
    }
    printf("%d\n",s);
    return 0;
}

#include <stdio.h>

int main()
{
    int n,d,i,count=0;
    scanf("%d%d",&n,&d);
    int a[n];
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        while(a[i-1]>=a[i])
        {
            a[i]=a[i]+d;
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

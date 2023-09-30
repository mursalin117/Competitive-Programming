#include <stdio.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0) count++;
    }
    if(count==1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                printf("%d\n",i+1);
                return 0;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                printf("%d\n",i+1);
                return 0;
            }
        }
    }
}

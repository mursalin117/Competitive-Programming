#include <stdio.h>

int main()
{
    int n,i,count=0,j;
    scanf("%d",&n);
    int a[n],b[n];
    scanf("%d%d",&a[0],&b[0]);
    for(i=1;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(count<1)
        {
            for(j=0;j<i;j++)
            {
                if(a[j]<a[i] && b[j]>b[i])
                {
                    count++;
                    break;
                }
            }
        }
    }
    if(count>=1)
    {
        printf("Happy Alex\n");
    }
    else
    {
        printf("Poor Alex\n");
    }
    return 0;
}

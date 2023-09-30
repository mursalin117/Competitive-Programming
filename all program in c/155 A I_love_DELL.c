#include <stdio.h>

int main()
{
    int n,i,max,min,count=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            count++;
        }
        else if(a[i]<min)
        {
            min=a[i];
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

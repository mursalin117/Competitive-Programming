#include <stdio.h>

int main()
{
    int n,a,m=0,count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(m!=a)
        {
            m=a;
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

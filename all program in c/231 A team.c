#include <stdio.h>

int main()
{
    int n,a,i,j,s,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&a);
            s=s+a;
        }
        if(s>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

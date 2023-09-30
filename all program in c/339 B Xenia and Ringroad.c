#include <stdio.h>

int main()
{
    long long int m,n,count=0,i,initial=1,finish;
    scanf("%I64d%I64d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%I64d",&finish);
        if(initial<=finish)
        {
            count=count+(finish-initial);
        }
        else
        {
            count=count+(n+finish-initial);
        }
        initial=finish;
    }
    printf("%I64d\n",count);
    return 0;
}

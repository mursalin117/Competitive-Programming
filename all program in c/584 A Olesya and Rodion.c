#include <stdio.h>

int main()
{
    int d,t,i,n=1;
    scanf("%d%d",&d,&t);
    for(i=1;i<=d;i++)
    {
        n=n*10;
    }
    for(i=n/10;i<n;i++)
    {
        if(i%t==0)
        {
            printf("%d\n",i);
            return 0;
        }
        else continue;
    }
    printf("-1\n");
    return 0;
}

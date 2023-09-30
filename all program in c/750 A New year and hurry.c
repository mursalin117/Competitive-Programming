#include <stdio.h>

int main()
{
    int n,k,i,s=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        s=s+5*i;
        if(s+k <= 240) continue;
        else break;
    }
    printf("%d\n",i-1);
    return 0;
}

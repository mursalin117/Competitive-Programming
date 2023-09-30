#include <stdio.h>

int main()
{
    int t,n,i,m=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        if(n>=10)
        {
            printf("%d %d\n",n-10,10);
        }
        else
        {
            printf("%d %d\n",0,n);
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int t,n,i,j,m=1,s=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        m=1;
        s=0;
        for(j=1;;j++)
        {
            m=m*5;
            s=s+n/m;
            if(m>n) break;
        }
        printf("%d\n",s);
    }
    return 0;
}

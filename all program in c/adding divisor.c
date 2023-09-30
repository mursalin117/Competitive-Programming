#include <stdio.h>

int main()
{
    int n,i;
    int m,j,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        s=0;
        for(j=1;j<=(m/2);j++)
        {
            if(m%j==0)
            {
                s=s+j;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}


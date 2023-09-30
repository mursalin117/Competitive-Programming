#include <stdio.h>

int main()
{
    int n,i,m,s,x,y,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        m=x;
        if(x>y)
        {
            x=y;
            y=m;
        }
        s=0;
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
            {
                s=s+j;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}

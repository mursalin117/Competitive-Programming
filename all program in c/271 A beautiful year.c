#include <stdio.h>

int main()
{
    int n,i,a[4],count=0,j,m;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        m=i;
        for(j=0;j<4;j++)
        {
            a[j]=m%10;
            m=m/10;
        }
        if(a[0]==a[1] || a[0]==a[2] || a[0]==a[3] || a[1]==a[2] || a[1]==a[3] || a[2]==a[3])
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}

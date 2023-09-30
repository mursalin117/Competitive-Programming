#include <stdio.h>
#include <math.h>

int main()
{
    int a[5][5],i,j,n,m;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                m=i;
                n=j;
            }
        }
    }
    printf("%d\n",abs(m-2)+abs(n-2));
    return 0;
}

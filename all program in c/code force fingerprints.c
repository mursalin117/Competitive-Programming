#include <stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int x[n],y[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(x[i]==y[j])
            {
                printf("%d ",x[i]);
                break;
            }
            else continue;
        }
    }
    printf("\n");
    return 0;
}

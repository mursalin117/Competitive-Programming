#include <stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2!=0)
            {
                printf("#");
            }
            else
            {
                if((i/2)%2!=0 && j!=n)
                {
                    printf(".");
                }
                else if((i/2)%2!=0 && j==n)
                {
                    printf("#");
                }
                else if((i/2)%2==0 && j==1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

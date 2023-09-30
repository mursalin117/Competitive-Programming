#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0)
            {
                a[i][j]=1;
            }
            else if(j==0)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }

        }
    }
    printf("%d\n",a[n-1][n-1]);
    return 0;
}

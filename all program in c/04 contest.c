#include <stdio.h>

int main()
{
    int t,n,i,j;
    double s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        s=0.0;
        for(j=1;j<=n;j++)
        {
            s=s+(double)n/(double)j;
        }
        printf("%0.2lf\n",s);
    }
    return 0;
}

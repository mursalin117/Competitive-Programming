#include <stdio.h>

int main()
{
    int t,i,angle,j;
    double s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&angle);
        for(j=1;;j++)
        {
            s=180.0-(360.0/(double)j);
            if(s==(double)angle)
            {
                printf("YES\n");
                break;
            }
            else if(s>angle)
            {
                printf("NO\n");
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}

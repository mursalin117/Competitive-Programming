#include <stdio.h>
#include <math.h>

int main()
{
    int t,i,n;
    double R,r,pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%d",&R,&n);
        r=(pi*R)/(n+pi);
        printf("Case %i: %lf\n",i,r);
    }
    return 0;
}

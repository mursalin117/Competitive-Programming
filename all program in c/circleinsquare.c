#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    double a,pi=2*acos(0.0);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&a);
        printf("Case %d: %0.2lf\n",i,(4*a*a)-(pi*a*a));

    }
    return 0;
}

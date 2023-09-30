#include <stdio.h>
#include <math.h>

int main()
{
    int i,n;
    double r,l,w,pi=2*acos(0.0),ar,ac;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&l);
        w=l*0.6;
        r=l/5.0;
        ac=pi*r*r;
        ar=(l*w)-ac;
        printf("%0.2lf %0.2lf\n",ac,ar);
    }
    return 0;
}

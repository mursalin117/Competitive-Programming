#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 2*acos(0.0)

int main()
{
    int t,i;
    double r1,r2,r3,a,b,c,area1,area2,area3,areaTri,s,A,B,C,Area;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a = r1+r2;
        b = r2+r3;
        c = r1+r3;
        s = (a+b+c)/2;
        areaTri = s*(s-a)*(s-b)*(s-c);
        areaTri = fabs(areaTri);
        areaTri = sqrt(areaTri);
        A = ((b*b)+(c*c)-(a*a))/(2*b*c);
        A = acos(A);
        B = ((a*a)+(c*c)-(b*b))/(2*a*c);
        B = acos(B);
        C = ((a*a)+(b*b)-(c*c))/(2*a*b);
        C = acos(C);
        area1 = pi*(r1*r1)*(B/360.0);
        area2 = pi*(r3*r3)*(C/360.0);
        area3 = pi*(r2*r2)*(A/360.0);
        Area = areaTri - (area1+area2+area3);
        printf("Case %d: %lf\n",i,Area);
    }
    return 0;
}

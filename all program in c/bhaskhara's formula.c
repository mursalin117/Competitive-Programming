#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,r1,r2,d;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=sqrt((b*b)-(4*a*c));
    if(d>=0 && a>0)
    {
        r1=-(b-d)/(2*a);
        r2=-(b+d)/(2*a);
        printf("R1 = %0.5lf\nR2 = %0.5lf\n",r1,r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}

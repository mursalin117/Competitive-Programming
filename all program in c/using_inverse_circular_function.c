#include <stdio.h>
#include <math.h>

int main()
{
    double pi=2*acos(0.0),x,value;
    scanf("%lf",&x);
    value=(acos(x)*180)/pi;
    printf("%lf",value);
    return 0;

}

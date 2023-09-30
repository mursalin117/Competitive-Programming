#include <stdio.h>

int main()
{
    double a,b,sum;
    printf("Enter two numbers:");
    scanf("%lf%lf",&a,&b);
    sum=a+b;
    printf("The sum is %lf+%lf=%lf\n",a,b,sum);
    printf("The sum is %lf+%lf=%.2lf",a,b,sum);
    return 0;

}

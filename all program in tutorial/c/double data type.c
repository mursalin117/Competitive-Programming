#include <stdio.h>

int main()
{
    double d;

    printf("Enter a real number :\n"); // entering 3.14159

    scanf("%lf", &d);

    printf("The number you have entered is %lf\n", d);
    printf("Or %0.12lf\n",d);
    printf("Or %0.4lf\n",d);

    return 0;
}


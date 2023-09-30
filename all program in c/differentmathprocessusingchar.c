#include <stdio.h>

int main()
{
    double num1,num2,sum,substruction,multiply,divide;
    char ch1='+',ch2='-',ch3='*',ch4='/',ch5='=';

    printf("Enter a number :");
    scanf("%lf",&num1);
    printf("Enter another number :");
    scanf("%lf",&num2);

    sum=num1+num2;
    substruction=num1-num2;
    multiply=num1*num2;
    divide=num1/num2;

    printf("%lf %c %lf %c %lf\n",num1,ch1,num2,ch5,sum);
    printf("%lf %c %lf %c %lf\n",num1,ch2,num2,ch5,substruction);
    printf("%lf %c %lf %c %lf\n",num1,ch3,num2,ch5,multiply);
    printf("%lf %c %lf %c %lf\n",num1,ch4,num2,ch5,divide);

    return 0;
}

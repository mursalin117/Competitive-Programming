#include <stdio.h>

int func(int x, int y);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    return func(a,b);
}
int func(int x, int y)
{
    int sum;
    sum = x+y;
    printf("%d",sum);
    return 0;
}

#include <stdio.h>

int func(int x, int y);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    func(a,b);
    return 0;
}
int func(int x, int y)
{
    return (printf("%d",x+y));
}

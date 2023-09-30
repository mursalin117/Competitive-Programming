#include <stdio.h>

int mini(int x, int y);

int main()
{
    int a, b, smaller;

    scanf("%d%d", &a, &b);

    smaller = mini(a, b);

    printf("The smaller number is %d\n", smaller);

    return 0;
}

int mini(int x, int y)
{
    int com;

    if(x > y) com = y;
    else com = x;

    return  com;
}

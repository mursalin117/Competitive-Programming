#include <stdio.h>

int mini(int x, int y);

int main()
{
    int a, b, c, m;

    scanf("%d%d%d", &a, &b, &c);

    m = mini(a, b);
    m = mini(m, c);

    printf("The small number is %d\n", m);

    return 0;
}

int mini(int x, int y)
{
    int com;

    if(x > y) com = y;
    else com = x;

    return com;
}

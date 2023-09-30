#include <stdio.h>

int main()
{
    int c,r,i,j;

    scanf("%d%d", &c, &r);

    double marks[c][r];

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            scanf("%lf", &marks[i][j]);
        }
    }

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("Class is :%d\tRoll is :%d\tMark is :%lf\n", i+1, j+1, marks[i][j]);
        }
    }

    return 0;
}

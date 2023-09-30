#include <stdio.h>

int main()
{
    int i,j,table[10][10],n;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            table[i][j] = (i+1) * (j+1);
        }
    }
    scanf("%d", &n);
    for(i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", n, i+1, table[n-1][i]);
    }
    return 0;
}

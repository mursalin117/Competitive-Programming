#include <stdio.h>

int main()
{
    int c, r, i, j, t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &r, &c);

        for(i = 1; i <= r; i++)
        {
            if(i == 1 || i == r)
            {
                for(j = 1; j <= c; j++) printf("*");
            }
            else
            {
                for(j = 1; j <= c; j++)
                {
                    if(j == 1 || j == c) printf("*");
                    else printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

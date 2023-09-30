#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, r, t, i, j;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &c, &r);

        for(i = 1; i <= c; i++)
        {
            if(i % 2 == 0)
            {
                for(j = 1; j <= r; j++)
                {
                    if(j % 2 == 0) printf("*");
                    else printf(".");
                }
                printf("\n");
            }
            else
            {
                for(j = 1; j <= r; j++)
                {
                    if(j % 2 == 0) printf(".");
                    else printf("*");
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}

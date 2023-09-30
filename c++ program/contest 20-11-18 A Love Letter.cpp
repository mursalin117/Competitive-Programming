#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c, i, j, n = 0, nc = 0;
    scanf("%d%d", &r, &c);
    getchar();
    char ch[r+5][c+5];
    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            scanf("%c",  &ch[i][j]);
            if(ch[i][j] == '*') n++;
        }
        getchar();
        //printf("\n");
        nc = max(n, nc);
        n = 0;
    }
    for(i = 1; i <= r; i++)
    {
        n = nc;
        for(j = 1; j <= c; j++)
        {
            if(ch[i][j] == '*' && n > 0)
             {
                    while(n > 0)
                    {
                        printf("%c", ch[i][j]);
                        j++;
                        n--;
                    }
                    printf("\n");
                    break;
             }
             else continue;
        }
    }
    return 0;
}

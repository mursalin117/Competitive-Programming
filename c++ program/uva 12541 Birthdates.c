#include <stdio.h>
#include <stdlib.h>

struct birthdate
{
        int y, m, d;
        char name[50];
};

int main()
{
        int n, i;
        scanf("%d", &n);

        struct birthdate b[n];

        for(i = 0; i < n; i++)
        {
            scanf("%s", b[i].name);
            scanf("%d%d%d", &b[i].d, &b[i].m, &b[i].y);
        }
        sort(b, b+n, )
}

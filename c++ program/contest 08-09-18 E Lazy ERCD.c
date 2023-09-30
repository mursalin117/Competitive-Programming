#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, x;

    freopen("lazy.in", "r", stdin);

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        printf("Case %d: %d\n", i+1, x-1);
    }
    return 0;
}

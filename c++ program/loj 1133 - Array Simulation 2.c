#include <stdio.h>

int main()
{
    int i, j, l, n, m, t, d, k, y, z;
    char ch;

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d%d", &n, &m);
        int a[n], b[n];

        for(j = 0; j < n; j++) scanf("%d", &a[j]);

        for(j = 0; j < m; j++)
        {
            getchar();
            scanf("%c", &ch);

            if(ch == 'S')
            {
                scanf("%d", &d);
                for(l = 0; l < n; l++) a[l] += d;
            }
            else if(ch == 'M')
            {
                scanf("%d", &d);
                for(l = 0; l < n; l++) a[l] *= d;
             }
             else if(ch == 'D')
             {
                 scanf("%d", &k);
                 for(l = 0; l < n; l++) a[l] /= k;
             }
             else if(ch == 'R')
             {
                 for(l = 0; l < n; l++) b[n-1-l] = a[l];
                 for(l = 0; l < n; l++) a[l] = b[l];
             }
             else
             {
                 scanf("%d%d", &y, &z);
                 k = a[y];
                 a[y] = a[z];
                 a[z] = k;
             }
        }
        printf("Case %d:\n", i);
        for(j = 0; j < n-1; j++)
        {
            printf("%d ", a[j]);
        }
        printf("%d\n", a[n-1]);
    }
    return 0;
}


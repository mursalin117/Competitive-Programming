#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int a, b, c, d, t, i, j, sum, len, x, k;
    char s[30];

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        getchar();
        gets(s);
        sum = 0;
        len = strlen(s);

        for(j = 0; j < 8; j++)
        {
            x = s[j] - '0';
            sum += (pow(2, 7-j) * x);
        }
        if(sum == a)
        {
            sum = 0;
            for(j = 9, k = 0; j < 17; j++, k++)
            {
                x = s[j] - '0';
                sum += (pow(2, 7-k) * x);
            }
            if(sum == b)
            {
                sum = 0;
                for(j = 18, k = 0; j < 26; j++, k++)
                {
                    x = s[j] - '0';
                    sum += (pow(2, 7-k) * x);
                }
                if(sum == c)
                {
                    sum = 0;
                    for(j = 27, k = 0; j < 35; j++, k++)
                    {
                        x = s[j] - '0';
                        sum += (pow(2, 7-k) * x);
                    }
                    if(sum == d) printf("Case %d: Yes\n", i);
                    else printf("Case %d: No\n", i);
                }
                else printf("Case %d: No\n", i);
            }
            else printf("Case %d: No\n", i);
        }
        else printf("Case %d: No\n", i);
    }
    return 0;
}

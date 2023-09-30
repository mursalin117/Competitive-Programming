#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n, i, coun = 0;

    scanf("%d%d%d", &a, &b, &n);

    if(a % b == 0)
    {
        printf("%d", a);
        for(i = 0; i < n; i++) printf("0");
        return 0;
    }
    else
    {
        a = a * 10;
        for(i = 0; i < 10; i++)
        {
            a += i;
            if(a % b == 0)
            {
                printf("%d", a);
                n -= 1;
                while(n > 0)
                {
                    printf("0");
                    n--;
                }
                return 0;
            }
            else
            {
                a -= i;
                coun++;
                if(coun == 10) break;
            }
        }
    }
    printf("-1");
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, sum, i, j;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        if(n == 1) printf("0\n");
        else
        {
            sum = 1;
            for(j = 2; j * j < n; j++)
            {
                if(n % j == 0)
                {
                    sum += j;
                    sum += (n / j);
                }
                else continue;
            }
            if(j * j == n) sum += j;
            printf("%d\n", sum);
        }
    }
    return 0;
}

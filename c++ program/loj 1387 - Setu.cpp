#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum, t, n, k, i, j;
    string s;

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        printf("Case %d:\n", i);
        scanf("%d", &n);
        sum = 0;
        for(j = 0; j < n; j++)
        {
            cin >> s;
            if(s[0] == 'd')
            {
                scanf("%d", &k);
                sum += k;
            }
            else printf("%d\n", sum);
        }
    }
    return 0;
}

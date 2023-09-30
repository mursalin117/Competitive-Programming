#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, i;
    scanf("%d%d", &n, &t);
    if(t < 10)
    {
        for(i = 0; i < n; i++)
            printf("%d", t);
    }
    else if(t == 10 && n > 1)
    {
        printf("10");
        for(i = 0; i < n-2; i++)
            printf("0");
    }
    else printf("-1");
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, sum, com;
    scanf("%d%d%d", &a, &b, &c);
    com = min(a, b);
    com = min(com, c);
    a = com;
    for( ; ; )
    {
        if(a < b && a + 1 < c) break;
        else a--;
    }
    sum = 3 * (a + 1);
    printf("%d\n", sum);
    return 0;
}

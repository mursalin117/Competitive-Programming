#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, fac = 1, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        fac *= i;
    printf("%d\n", fac);
    return 0;
}

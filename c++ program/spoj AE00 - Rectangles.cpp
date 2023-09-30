#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;

    scanf("%d", &n);
    d = n + (n / 2) - 1 + sqrt(n) - 1;

    printf("%d\n", d);

    return 0;
}

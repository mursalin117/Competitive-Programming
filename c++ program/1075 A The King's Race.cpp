#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int b, w, x, y, n;

    scanf("%lld%lld%lld", &n, &x, &y);

    w = abs(x - 1) + abs(y - 1);
    b = abs(x - n) + abs(y - n);

    if(w == b) printf("White\n");
    else if(w < b) printf("White\n");
    else printf("Black\n");

    return 0;
}


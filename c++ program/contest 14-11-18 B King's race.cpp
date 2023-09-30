#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int w, b, n, r, c;

    scanf("%lld%lld%lld", &n, &r, &c);

    w = abs(1 - r) + abs(1 - c);
    b = abs(n - r) + abs(n - c);

    if(w <= b) printf("White\n");
    else printf("Black\n");

    return 0;
}

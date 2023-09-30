#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l1, l2, r1, r2, k, l, r;
    scanf("%lld%lld%lld%lld%lld", &l1, &r1, &l2, &r2, &k);
    r = min(r1, r2);
    l = max(l1, l2);
    //cout << l << "  " << r << endl;
    if(l > r) printf("0\n");
    else
    {
        if(k >= l && k <= r) printf("%lld\n", (r-l));
        else printf("%lld\n", (r-l)+1);
    }
    return 0;
}

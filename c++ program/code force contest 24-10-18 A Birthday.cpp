#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int m, n, l, k, numNewCoin, numCoinByFrnd;

    scanf("%ld%ld%ld%ld", &n, &m, &k, &l);

    numNewCoin = n - k;
    numCoinByFrnd = numNewCoin/m;

    if(numCoinByFrnd >= 1 && (numCoinByFrnd * m) - k >= l) printf("%ld\n", numCoinByFrnd);
    else printf("-1\n");

    return 0;
}

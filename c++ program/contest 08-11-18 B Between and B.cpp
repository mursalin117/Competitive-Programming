#include  <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, s, x;

    scanf("%lld%lld%lld", &a, &b, &x);
    //cout << a << b << x << endl;
    if(a%x == 0) s = ((b/x) - (a/x)) + 1;
    else s = ((b/x) - (a/x));

    printf("%lld\n", s);

    return 0;
}

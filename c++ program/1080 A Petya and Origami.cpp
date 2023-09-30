#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, k, sum = 0, d;
    scanf("%ld%ld", &n, &k);
    d = n * 2;
    //cout << "d = " << d << " d/k = " << d/k << endl;
    if(d % k == 0) sum += d/k;
    else sum += ((d/k)+1);
    //cout << sum << endl;
    d = n * 5;
    //cout << "d = " << d << " d/k = " << d/k << endl;
    if(d % k == 0) sum += d/k;
    else sum += ((d/k)+1);
    //cout << sum << endl;
    d = n * 8;
    //cout << "d = " << d << " d/k = " << d/k <<endl;
    if(d % k == 0) sum += d/k;
    else sum += ((d/k)+1);
    printf("%ld\n", sum);
    return 0;
}

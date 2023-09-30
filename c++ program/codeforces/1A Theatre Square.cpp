#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, a, com1, com2;
    scanf("%lld%lld%lld", &n, &m, &a);

    com1 = n / a;
    if(n % a != 0) com1 += 1;
    com2 = m / a;
    if(m % a != 0) com2 += 1;

    printf("%lld\n", com1 * com2); 
    return 0;
}
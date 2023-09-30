#include <bits/stdc++.h>

using namespace std;

int main(){
    long int n, m, c;
    scanf("%ld%ld", &n, &m);
    c = pow(2, n);
    printf("%ld\n", m % c);
    return 0;
}

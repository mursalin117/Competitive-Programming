#include <iostream>
#include <bits/stdc++.h>

typedef unsigned long int ul;

ul factorial(ul x);

using namespace std;

int main()
{
    ul n,m,fact;

    cin >> n >> m;

    if(n > m) fact = factorial(m);
    else fact = factorial(n);

    cout << fact << endl;

    return 0;
}

ul factorial(ul x)
{
    if(1 >= x) return 1;
    else return x * factorial(x - 1);
}

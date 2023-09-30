#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int power(int n, int r);

int main()
{
    int b, p, sum;

    scanf("%d%d", &b, &p);

    sum = power(b, p);

    printf("%d\n", sum);

    return 0;
}

int power(int n, int r)
{
    if(r == 0) return 1;
    if(r == 1) return n;
    if(r%2 == 1) return (power(n, r-1) * n);
    else
    {
        int x = power(n, (r/2));
        return x * x;
    }
}

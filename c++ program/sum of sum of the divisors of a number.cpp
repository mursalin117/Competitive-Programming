#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long int sumDivisor(long int x);

int main()
{
    long int n, i, sum = 0;

    scanf("%ld", &n);

    for(i = 1; i * i < n; i++)
    {
        if(n % i == 0)
        {
            sum += sumDivisor(i);
            sum += sumDivisor(n/i);
        }
    }
    if(i * i == n) sum += sumDivisor(i);

    printf("%ld\n", sum);

    return 0;
}

long int sumDivisor(long int x)
{
    long int i, coun = 0;

    for(i = 1; i * i < x; i++)
    {
        if(x % i == 0) coun += 2;
    }
    if(i * i == x) coun ++;

    return coun;
}

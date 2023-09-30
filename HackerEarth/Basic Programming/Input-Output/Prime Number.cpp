#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sieveFunction(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(int p = 2; p*p <= n; p++)
    {
        if(prime[p] == true)
        {
            for(int i = p*p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for(int p = 2; p <= n; p++)
    {
        if(prime[p] == true)
            printf("%d ", p);
    }printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    sieveFunction(n);
    return 0;
}

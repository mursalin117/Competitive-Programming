#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    scanf("%ld", &n);
    if(n > 4 && n % 2 == 0)
    {
        if((n/2) % 2 == 0) printf("%ld\n", (n/4)-1);
        else printf("%ld\n", (n/4));
    }
    else printf("0\n");
    return 0;
}

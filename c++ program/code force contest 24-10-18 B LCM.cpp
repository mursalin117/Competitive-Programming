#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int b, i, coun = 0;

    scanf("%ld", &b);

    for(i = 1; i * i < b; i++)
    {
        if(b % i == 0) coun += 2;
    }
    if(i * i == b) coun++;

    printf("%ld\n", coun);

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, n, s;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);
        s = n / 7;
        if(n % 7 != 0) s++;
        printf("%d\n", s);
    }
    return 0;
}

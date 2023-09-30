#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i, t, n, a, b, s;

    scanf("%ld", &t);

    for(i = 0; i < t; i++)
    {
        scanf("%ld%ld", &a, &b);

        n = a% 10;

        if(n != 0 && b == 0) printf("1\n");
        else if(n == 0 || n == 1 || n == 5 || n == 6) printf("%d\n", n);
        else
        {
            s = b % 4;
            if(s == 1) printf("%ld\n", n);
            else if(s == 2) printf("%ld\n", (n * n) % 10);
            else if(s == 3) printf("%ld\n", (n * n * n) % 10);
            else printf("%ld\n", (n * n * n * n) % 10);
        }
    }
    return 0;
}

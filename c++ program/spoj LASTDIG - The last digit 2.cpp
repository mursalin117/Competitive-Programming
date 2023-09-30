#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i, t, n, a, b, s, a2[4] = {6, 2, 4, 8}, a3[4] = {1, 3, 9, 7}, a4[4] = {6, 4, 6, 4}, a7[4] = {1, 7, 9, 3}, a8[4] = {6, 8, 4, 2}, a9[4] = {1, 9, 1, 9};

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

            if(n == 2) printf("%ld\n", a2[s]);
            else if(n == 3) printf("%ld\n", a3[s]);
            else if(n == 4) printf("%ld\n", a4[s]);
            else if(n == 7) printf("%ld\n", a7[s]);
            else if(n == 8) printf("%ld\n", a8[s]);
            else printf("%ld\n", a9[s]);
        }
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, l, r, i;
    scanf("%ld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%ld%ld", &l, &r);
        if(l == r && l % 2 == 0) printf("%ld\n", l);
        else if(l == r && l % 2 != 0) printf("-%ld\n", l);
        else if(l != r && l % 2 == 0 && r % 2 == 0) printf("%ld\n", (l+r)/2);
        else if(l != r && l % 2 != 0 && r % 2 != 0) printf("-%ld\n", (l+r)/2);
        else
        {
            if(r % 2 == 0) printf("%ld\n", (r-l+1)/2);
            else printf("-%ld\n", (r-l+1)/2);
        }
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &x, &y);

        if(x >= y) printf("MMM BRAINS\n");
        else printf("NO BRAINS\n");
    }
    return 0;
}

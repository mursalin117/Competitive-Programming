#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, l1, r1, l2, r2;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
        if(l1 == l2 && r1 == r2) printf("%d %d\n", l1, l1+1);
        else if(l1 == l2 && r1 != r2) printf("%d %d\n", r1, r2);
        else if(l1 != l2 && r1 == r2) printf("%d %d\n", l1, l2);
        else printf("%d %d\n", l1, l2);
    }
    return 0;
}

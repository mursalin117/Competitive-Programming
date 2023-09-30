#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], s;

    scanf("%d%d%d", &a[0], &a[1], &a[2]);

    sort(a, a+3);

    if(a[0] + a[1] > a[2]) printf("0\n");
    else
    {
        s = a[2] - (a[0] + a[1]) + 1;
        printf("%d\n", s);
    }
    return 0;
}

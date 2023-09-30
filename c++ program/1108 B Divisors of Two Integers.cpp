#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, d = 0;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    printf("%d ", a[n-1]);
    for(i = 1; i < n; i++)
    {
        if(a[n-1] % a[n-1-i] != 0) { d = 1; printf("%d\n", a[n-1-i]); break; }
    }
    if(d == 0) printf("1\n");
    return 0;
}

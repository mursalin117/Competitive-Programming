#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    for(i = n-1; i > 0; i--)
    {
        if(i == n-1) printf("%d ", a[i]);
        else
        {
            if(a[i] == a[i+1]) continue;
            else printf("%d ", a[i]);
        }
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, k = 0;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
    {
        if(a[i] == 0 && a[i-1] == 1 && a[i+1] == 1)
        {
            k++;
            a[i+1] = 0;
        }
    }
    printf("%d\n", k);
    return 0;
}

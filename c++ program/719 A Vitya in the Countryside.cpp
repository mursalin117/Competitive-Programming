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
    if(n == 1 && a[n-1] != 0 && a[n-1] != 15) printf("-1\n");
    else
    {
        if(a[n-1] == 15) printf("DOWN\n");
        else if(a[n-1] == 0) printf("UP\n");
        else if(a[n-2] - a[n-1] > 0) printf("DOWN\n");
        else printf("UP\n");
    }
    return 0;
}

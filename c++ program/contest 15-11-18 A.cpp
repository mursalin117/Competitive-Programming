#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, coun = 0;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] == 0) coun++;
    }
    if(coun == n) printf("EASY\n");
    else printf("HARD\n");

    return 0;
}

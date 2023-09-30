#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10] = {4, 7, 47, 74, 447, 474, 477, 744, 747, 774}, i, n;
    scanf("%d", &n);
    for(i = 0; i < 10; i ++)
    {
        if(n % a[i] == 0 || n == a[i])
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}

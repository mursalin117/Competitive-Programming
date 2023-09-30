#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s = 0, coun = 0, i, x;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(x > 0) s += x;
        else
        {
            if(s >= abs(x))  s += x;
            else coun += x;
        }
    }
    printf("%d\n", abs(coun));
    return 0;
}

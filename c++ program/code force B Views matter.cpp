#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, m, i, sum = 0, d, c;
    scanf("%ld%ld", &n, &m);
    long int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
        if(i == 0) c = a[i];
        else
        {
            if(c < a[i]) c = a[i];
        }
    }
    if(n == 1) sum = 0;
    else
    {
        sort(a, a+n);
        for(i = 0; i < n; i++)
        {
            if(a[i] == 1) continue;
            else
            {
                if(i == 0)
                {
                    d = a[i] - 1;
                    sum += d;
                }
                else
                {
                    d = a[i] - a[i-1];
                    //if(d  0) sum += (a[i] - 1);
                    if(d <= 1) sum += (a[i] - 1);
                    else sum += a[i-1];
                }
            }
        }
    }
    printf("%ld\n", sum);

    return 0;
}

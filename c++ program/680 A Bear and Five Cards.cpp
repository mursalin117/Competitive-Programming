#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[105];

int main()
{
    int i, m = 0, x, sum = 0, d;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        a[x]++;
        sum += x;
    }
    for(i = 0; i < 101; i++)
    {
        if(a[i] > 1)
        {
            if(a[i] < 4)
            {
                d = a[i] * i;
                if(m < d) m = d;
            }
            else
            {
                d = 3 * i;
                if(m < d) m = d;
            }
        }
    }
    printf("%d\n", sum - m);
    return 0;
}

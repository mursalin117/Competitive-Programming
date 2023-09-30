#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, b, i;
    double num, base, sum;

    cin >> n;

    for(i = 0; i < t; i++)
    {
        cin >> n >> b;

        if(n <= 1) printf("Case %d: 1\n", i+1);
        else
        {
            base = (double)b;
            num = (double)n;
            sum = log(base) * log(num);
            sum += 1;
            printf("Case %d: %d\n", i+1, (int)sum);
        }
    }
    return 0;
}

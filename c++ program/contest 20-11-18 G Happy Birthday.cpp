#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int leapYear(int by, int cy);

int main()
{
    int d, m, by, cy, nb, t, i, sum;

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d%d%d%d", &d, &m, &by, &cy);
        sum = 0;
        if(by != cy)
        {
            if(d == 29 && m == 2) sum = leapYear(by, cy);
            else sum = cy - by;
        }
        else sum = 0;
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}

int leapYear(int by, int cy)
{

}

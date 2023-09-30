#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,x;
    double sum = 0.0,coun = 0.0,avg;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(x >= 0)
        {
            sum = sum + (double)x;
            coun++;
        }
    }
    avg = sum/coun;
    printf("%0.12lf\n",avg);

    return 0;
}

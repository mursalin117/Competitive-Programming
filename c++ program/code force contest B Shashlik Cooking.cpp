#include <iostream>
#include <bits/stdc++.h>

int a[10000];

using namespace std;

int main()
{
    int n, k, i, j, dmin, dmax, coun = 0;

    cin >> n >> k;

    for(i = 1; i <= n; i++)
    {
        //cout << a[i] << endl;
        dmin = i - k;
        dmax = i + k;
       // cout << dmin << " " << dmax << endl;
        for(j = dmin; j <= dmax; j++)
        {
            if(j > 0 && j <= n)
            {
                if(a[j] == 0) a[j] = 1;
                else a[j] = 0;

                //cout << a[j] << endl;
            }
        }
    }
    for(i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
        if(a[i] == 0)
        {
            coun++;
        }
    }
    cout << coun << endl;
    for(i = 1; i <= n; i++)
    {
        if(a[i] == 0) cout << i << " ";
    }
    cout << endl;

    return 0;
}

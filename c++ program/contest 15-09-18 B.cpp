#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, sum = 0, m;

    cin >> n;

    int a[n+1];

    for(i = 1, j = n; i <= n, j >= 1; i++, j--)
    {
        a[i] = j;
        //cout << a[i] << endl;
    }
    for(i = n, j = 1; i >= 1; i--, j++)
    {
        if(n%2 == 0)
        {
            if(i == n)
            {
                sum += a[i];
                //cout << sum << endl;
            }
            else
            {
                if(i == (n/2))
                {
                    int d = a[i] * i;
                    d = d/n;
                    sum += d;
                    a[i] = a[i] - d;
                    if(a[i] == 0) continue;
                    else m = a[i];
                }
                //cout << a[i] << endl;
                sum += a[i];
                a[j] = a[j] - a[i];
            }
        }

    }
    cout << sum << endl;

    return 0;
}

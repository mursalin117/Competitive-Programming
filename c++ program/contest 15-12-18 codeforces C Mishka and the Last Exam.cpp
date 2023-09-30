#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n, i, ma, mi;
    scanf("%lld", &n);
    ll a[n], b[n/2];
    for(i = 0; i < n/2; i++)
        scanf("%lld", &b[i]);
    for(i = 0; i < n/2; i++)
    {
        if(i == 0)
        {
            a[i] = 0;
            a[n-i-1] = b[i];
            //cout << "a[" << i << "] = " << a[i] << "a[" << n-i-1 << "] = " << a[n-i-1] << endl;
        }
        else
        {
            ma = a[n-i];
            mi = a[i-1];
            //cout << "ma = " << ma << "  mi = " << mi << endl;
            if(ma + mi == b[i])
            {
                a[i] = mi;
                a[n-i-1] = ma;
                //cout << "a[" << i << "] = " << a[i] << "a[" << n-i-1 << "] = " << a[n-i-1] << endl;
            }
            else if(ma + mi < b[i])
            {
                a[i] = b[i] - ma;
                a[n-i-1] = b[i] - a[i];
            }
            else
            {
                a[i] = mi;
                a[n-i-1] = b[i] - a[i];
                //cout << "a[" << i << "] = " << a[i] << "a[" << n-i-1 << "] = " << a[n-i-1] << endl;
            }
        }
    }
    for(i = 0; i < n; i++)
        printf("%lld ", a[i]);
    return 0;
}

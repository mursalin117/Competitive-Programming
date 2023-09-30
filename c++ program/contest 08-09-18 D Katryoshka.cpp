#include <iostream>
//#include <cstdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, a, b, c, s, i, m;

   freopen("katryoshka.in", "r", stdin);

    cin >> n;
    for(i= 0; i < n; i++)
    {
        cin >> a >> b >> c;
        m = min(a, b);
        m = min(m, c);
        s = m;
        a -= m;
        b -= m;
        c -= m;
        if(a == 0) cout << "Case " << i+1 << ": " <<s << endl;
        else
        {
            long int d = a/2;
            if(d <= c) s += d;
            a -= ((a/2)*2);
            c -= d;
            if(a <= 1) cout << "Case " << i+1 << ": " <<s << endl;
            else
            {
                d = a/2;
                if(d >= b && d >= c)
                {
                    s += d;
                    cout << "Case " << i+1 << ": " <<s << endl;
                }
                else cout << "Case " << i+1 << ": " <<s << endl;
            }
        }
    }
    return 0;
}


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m,com,s_m = 0,s = 0;

    cin >> n;

    int a[n],p[n];

    for(i = 0; i < n; i++)
    {
        cin >> a[i] >> p[i];
        s_m = s_m + a[i];
        if(i == 0) m = p[i];
        else
        {
            if(m > p[i]) m = p[i];
        }
    }
    s = s + (a[0]*p[0]);
    com = p[0];
    s_m = s_m - a[0];
    for(i = 1; i < n; i++)
    {
        if(com == m)
        {
            s = s + (s_m*m);
            break;
        }
        else if(com > p[i])
        {
            com = p[i];
            s = s + (a[i]*p[i]);
            s_m = s_m - a[i];
        }
        else if(com <= p[i])
        {
            s = s + (a[i]*com);
            s_m = s_m - a[i];
        }
    }
    cout << s << endl;

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,s = 0,c;

    cin >> n;

    int a[n],p[n];

    for(i =0; i < n; i++) cin >> a[i] >> p[i];

    for(i = 0; i < n; i++)
    {
        if(i ==0)
        {
            s = s + (a[i]*p[i]);
            c = p[i];
        }
        else
        {
            if(c > p[i])
            {
                c = p[i];
                s = s + (a[i]*c);
            }
            else
            {
                s = s + (a[i]*c);
            }
        }
    }
    cout << s << endl;

    return 0;
}

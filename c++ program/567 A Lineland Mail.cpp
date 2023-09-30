#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,i,ma,mi,dmax,dmin;

    cin >> n;

    int a[n];

    for(i = 0; i < n; i++) cin >> a[i];

    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            dmax = abs(a[n-1] - a[0]);
            dmin = abs(a[i+1] - a[0]);
        }
        else if(i == (n-1))
        {
            dmax = abs(a[n-1] - a[0]);
            dmin = abs(a[n-1] - a[n-2]);
        }
        else
        {
            dmax = max((a[n-1]-a[i]),(a[i]-a[0]));
            dmin = min((a[i+1]-a[i]),(a[i]-a[i-1]));
        }
        cout << dmin << " " << dmax << endl;
    }
    return 0;
}

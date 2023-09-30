#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n,m,i,j,coun = 0,x,y,s;

    cin >> n >> m;

    vector < int > l,r,d;

    for(i = 0; i < n; i++)
    {
        cin >> x >> y;

        l.push_back(x);
        r.push_back(y);
    }
    for(i = 1; i <= m; i++)
    {
        s = 0;
        for(j=0; j < n; j++)
        {
            if(i >= l[j] && i <= r[j])
            {
                s++;
                break;
            }
        }
        if(s == 0)
        {
            coun++;
            d.push_back(i);
        }
    }
    if(coun == 0) cout << coun << endl;
    else
    {
        cout << coun << "\n";
        for(i = 0; i < d.size(); i++)
            cout << d[i] << " ";
    }
    return 0;
}

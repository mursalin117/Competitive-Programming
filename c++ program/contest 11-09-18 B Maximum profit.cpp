#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,x,i,m,j,k,d;
    vector < long > v;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        if(i == 0) continue;
        else if(i == 1)
        {
            m = v[i] -v[i-1];
        }
        else
        {
            for(j = 0; j < i; j++)
            {
                d = v[i] - v[j];
                if(m < d) m = d;
            }
        }
    }
    cout << m << endl;

    return 0;
}

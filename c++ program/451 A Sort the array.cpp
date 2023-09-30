#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,i,coun = 0,d1,d2,x;
    vector <long int> a,b,c;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        b.push_back(x);
        c.push_back(x);
    }
    sort(b.begin(),b.end());
    reverse(c.begin(),c.end());

    if(b == c)
    {
        d1 = 1;
        d2 = a.size();
        cout << "yes" << endl;
        cout << d1 << " " << d2 << endl;
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                coun++;
                if(coun == 1) d1 = i;
                else if(coun ==2) d2 = i;
                else if(coun > 2)
                {
                    cout << "no" << endl;
                    return 0;
                }
            }
        }
        if(coun == 2)
        {
            cout << "yes" << endl;
            cout << d1+1 << " " << d2+1 << endl;
        }
        else
        {
            cout << "yes" << endl;
            cout << "1 " << "1" << endl;
        }
    }
    return 0;
}

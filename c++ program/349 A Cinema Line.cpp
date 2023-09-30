#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,x,s25 = 0,s50 = 0;
    vector <int> v;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(i = 0; i < n; i++)
    {
        if(v[i] == 25)
        {
            s25++;
            continue;
        }
        else if(v[i] == 50)
        {
            s50++;
            if(s25 < 1)
            {
                cout << "NO" << endl;
                return 0;
            }
            else s25--;
        }
        else
        {
            if(s25 >= 1 && s50 >= 1)
            {
                s25--;
                s50--;
            }
            else if(s25 >= 3)
            {
                s25 = s25 - 3;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}

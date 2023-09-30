#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d,d1,d2,i,len,t = 0;
    string s;

    cin >> s;

    len = s.size();
    for(i = 0; i < len; i++)
    {
        if(i == 0)
        {
            d1 = s[i] - 'a';
            d2 = 26 - d1;
            d = min(d1, d2);
            t = t + d;
        }
        else
        {
            d1 = abs(s[i] - s[i-1]);
            d2 = 26 - d1;
            d = min(d1, d2);
            t = t + d;
        }
    }
    cout << t << endl;

    return 0;
}

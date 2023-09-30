#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,len,coun = 0;
    string s;

    cin >> s;

    len = s.size();
    for(i = 0; i < len; i++)
    {
        if((s[i] == 'B' && s[i+1] == 'A') || (s[i] == 'A' && s[i+1] == 'B'))
        {
            i = i + 1;
            coun++;
        }
    }
    if(coun > 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

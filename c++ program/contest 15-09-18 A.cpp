#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, len;
    string s;

    cin >> s;

    len = s.size();

    for(i = 0; i < len; i++)
    {
        if(i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
        {
            s[i] = s[i] - 32;
            cout << s[i];
        }
        else cout << s[i];
    }
    return 0;
}

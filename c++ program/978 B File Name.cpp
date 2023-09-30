#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,coun = 0,n,num = 0;
    string s;

    cin >> n >> s;

    for(i = 0; i < n; i++)
    {
        if(s[i] == 'x') ++num;
        else
        {
            for(i = 0; i < n; i++)
            {
               // cout << s[i] << endl;
                if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x')
                {
                    ++coun;
                   // cout << s[i] << endl;
                }
            }
            cout << coun << endl;
            break;
        }
    }
    if(num == n) cout << n-2 << endl;

    return 0;
}

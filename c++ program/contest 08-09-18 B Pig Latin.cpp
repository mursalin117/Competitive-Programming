#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, j, len;
    char ch;
    string s;

    cin >> n;
    getchar();

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        len = s.size();
        for(j = 0; j < len; j++)
        {
            if(j == 0)
            {
                ch = s[j] + 32;
                //cout << ch;
                continue;
            }
            else if(j == 1) printf("%c",s[j] - 32);
            else if(s[j] == ' ')
            {
                cout << ch << "ay ";
            }
            else if(s[i-1] == ' ') ch = s[j];
            else cout << s[j];
        }
    }
    return 0;
}

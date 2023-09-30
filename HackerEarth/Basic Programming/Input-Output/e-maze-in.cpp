#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0, y = 0, i, len;
    string s;
    getline(cin, s);
    len = s.length();
    for(i = 0; i < len; i++)
    {
        if(s[i] == 'L') x -= 1;
        else if(s[i] == 'R') x += 1;
        else if(s[i] == 'U') y += 1;
        else y -= 1;
    }
    printf("%d %d\n", x, y);
    return 0;
}

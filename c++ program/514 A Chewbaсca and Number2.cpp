#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, len;
    string s;
    cin >> s;
    len = s.length();
    for(i = 0; i < len; i++)
    {
        if(i == 0 && s[i] == '0') printf("9");
        else if(s[i] < '5') printf("%c", s[i]);
        else printf("%d", '9' - s[i]);
    }
    return 0;
}

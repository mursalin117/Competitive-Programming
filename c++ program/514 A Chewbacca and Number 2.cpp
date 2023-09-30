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
        if(i == 0 && (s[0] == '0' || s[0] == '9')) printf("9");
        else if(s[i] >= '5') printf("%d", '9' - s[i]);
        else printf("%c", s[i]);
    }
    return 0;
}

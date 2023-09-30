#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int ch[26];

int main()
{
    int n, i, coun = 0, len;
    string s;
    scanf("%d", &n);
    getchar();
    getline(cin, s);
    len = s.length();
    for(i = 0; i < n; i++)
        ch[s[i]-'a']++;
    for(i = 0; i < 26; i++)
    {
        if(ch[i] > 0) coun++;
    }
    if(coun < 2) printf("NO\n");
    else
    {
        printf("YES\n");
        for(i = 0; i < n; i++)
        {
            if(s[i] != s[i+1])
            {
                printf("%c%c\n", s[i], s[i+1]);
                break;
            }
        }
    }
    return 0;
}


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[26], coun, i, j, t, len;
    string s;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        getline(cin, s);
        len = s.length();
        for(i = 0; i < 26; i++)
            a[i] = 0;
        for(i = 0; i < len; i++)
            a[s[i]-'a']++;
        coun = 0;
        for(i = 0; i < 26; i++)
        {
            if(a[i] > 0) coun++;
        }
        if(coun > 1)
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else printf("-1\n");
    }
    return 0;
}

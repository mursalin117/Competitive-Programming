#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int d;
        scanf("%d", &d);
        map <char, int> mp;
        char ch; int val;
        for(int i = 0; i < d; i++)
        {
            getchar();
            scanf("%c %d", &ch, &val);
            mp[ch] = val;
        }
        int l;
        scanf("%d", &l);
        getchar();
        string s;
        ll sum = 0;
        while(l--)
        {
            getline(cin, s);
            int len;
            len = s.length();
            for(int i = 0; i < len; i++)
            {
                if(mp[s[i]]) sum += mp[s[i]];
            }
        }
        printf("%lld.%02lld$\n", sum/100, sum%100);
    }
    return 0;
}

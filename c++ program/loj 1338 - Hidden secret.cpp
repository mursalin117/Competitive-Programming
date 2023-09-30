#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len1, len2, i, j, t, sum, a[26], b[26];
    string s1, s2;

    scanf("%d", &t);
    getchar();
    for(i = 1; i <= t; i++)
    {
        getline(cin, s1);
        getline(cin, s2);

        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));

        len1 = s1.size();
        len2 = s2.size();

        for(j = 0; j < len1; j++)
        {
            if(s1[j] >= 'a' && s1[j] <= 'z') a[s1[j] - 'a']++;
            else if(s1[j] >= 'A' && s1[j] <= 'Z') a[s1[j] - 'A']++;
            else continue;
        }
        for(j = 0; j < len2; j++)
        {
            if(s2[j] >= 'a' && s2[j] <= 'z') b[s2[j] - 'a']++;
            else if(s2[j] >= 'A' && s2[j] <= 'Z') b[s2[j] - 'A']++;
            else continue;
        }
        sum = 0;
        for(j = 0; j < 26; j++)
        {
            if(a[j] == b[j]) sum++;
            else continue;
        }
        if(sum == 26) printf("Case %d: Yes\n", i);
        else printf("Case %d: No\n", i);
    }
    return 0;
}

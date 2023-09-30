#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, len1, len2, coun;
    int a[26], b[26];
    string s1, s2;

    scanf("%d", &t);
    getchar();

    for(i = 1; i <= t; i++)
    {
        getline(cin, s1);
        getline(cin, s2);

        len1 = s1.size();
        len2 = s2.size();
        coun = 0;
        for(j = 0; j < 26; j++)
        {
            a[j] = 0;
            b[j] = 0;
           // cout << j+1 << " " << a[j] << " " << b[j] << endl;
        }
        for(j = 0; j < len1; j++)
        {
            if(s1[j] >= 'a' && s1[j] <= 'z') a[s1[j]-'a']++; //cout << a[s1[j]-97]++ << endl;}
            else if(s1[j] >= 'A' && s1[j] <= 'Z') a[s1[j]-'A']++; //cout << a[s1[j]-65]++ << endl;}
            else continue;
        }
        for(j = 0; j < len2; j++)
        {
            if(s2[j] >= 'a' && s2[j] <= 'z') b[s2[j]-'a']++; //cout << b[s2[j]-97]++ << endl;}
            else if(s2[j] >= 'A' && s2[j] <= 'Z') b[s2[j]-'A']++; //cout << b[s2[j]-65]++ << endl;}
            else continue;
        }
        for(j = 0; j < 26; j++)
        {
            if(a[j] == b[j]) coun++;
            //else cout << a[j] << " " << b[j] << " " << j << endl;
            //cout << coun << endl;
        }
        if(coun == 26) printf("Case %d: Yes\n", i);
        else printf("Case %d: No\n", i);
    }
    return 0;
}

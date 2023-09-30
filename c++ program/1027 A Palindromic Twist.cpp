#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, coun, com;
    string s;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        getchar();
        cin >> s;

        com = n/2;
        coun = 0;
        for(i = 0; i < com; i++)
        {
            if(s[i] == s[n-i-1] || abs(s[i]-s[n-i-1]) == 2) coun++;
        }
        if(coun == com) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

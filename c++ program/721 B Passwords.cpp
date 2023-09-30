#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, coun1 = 0, coun2 = 0, len1, len2, bc, wc;
    scanf("%d%d", &n, &m);
    getchar();
    string s, str[n];
    for(i = 0; i < n; i++)
        cin >> str[i];
    cin >> s;
    len2 = s.length();
    for(i = 0; i < n; i++)
    {
        len1 = str[i].length();
        if(len1 < len2) coun1++;
        else if(len1 == len2) coun2++;
        else continue;
    }
    bc = (coun1/m) * 5 + coun1 + 1;
    wc = ((coun1 + coun2 - 1)/m) * 5 + coun1 + coun2;
    printf("%d %d\n", bc, wc);
    return 0;
}

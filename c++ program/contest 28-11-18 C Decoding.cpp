#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, len, a = 0, b = 0;
    string s;
    char e[1005], o[1005];
    scanf("%d",  &n);
    getchar();
    getline(cin, s);
    if(n % 2 != 0)
    {
        for(i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                o[b] = s[i];
                b++;
            }
            else
            {
                e[a] = s[i];
                a++;
            }
        }
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                e[a] = s[i];
                a++;
            }
            else
            {
                o[b] = s[i];
                b++;
            }
        }
    }
    for(i = a-1; i >= 0; i--) printf("%c", e[i]);
    for(i = 0; i < b; i++) printf("%c", o[i]);
    return 0;
}

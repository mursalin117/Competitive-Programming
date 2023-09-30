#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    map <string, int> mp;

    scanf("%d", &n);
    getchar();
    while(n--)
    {
        getline(cin, s);
        if(mp[s]) cout << s << mp[s]++ << endl;
        else
        {
            printf("OK\n");
            mp[s] = 1;
        }
    }
    return 0;
}

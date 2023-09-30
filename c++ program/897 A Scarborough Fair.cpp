#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, l , r, m, j;
    string s;
    char c1, c2;
    scanf("%d%d", &n, &m);
    getchar();
    cin >> s;
    for(i = 0; i < m; i++)
    {
        scanf("%d %d ", &l, &r);
        //getchar();
        scanf("%c %c", &c1, &c2);
        //getchar();
        for(j = l-1; j <= r-1; j++)
        {
           // cout << l << " " << r << " " << c1 << " " << c2 << endl;
            if(s[j] == c1) s[j] = c2;
            //cout << s << endl;
        }
    }
    cout << s << endl;
    return 0;
}

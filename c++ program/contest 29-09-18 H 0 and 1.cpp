#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, len, t, mi, ma, a, b, test = 0;
    bool com;
    string s;

    while(cin >> s)
    {
        printf("Case %d:\n", ++test);
        scanf("%d", &t);
        for(i = 1; i <= t; i++)
        {
            scanf("%d%d", &a, &b);

            if(a == b) printf("Yes\n");
            else
            {
                mi = min(a, b);
                ma = max(a, b);

                for(j = mi; j < ma; j++)
                {
                    if(s[j] == s[j+1]) com = true;
                    else
                    {
                        com = false;
                        break;
                    }
                }
                if(com) printf("Yes\n");
                else printf("No\n");
            }
        }
    }
    return 0;
}

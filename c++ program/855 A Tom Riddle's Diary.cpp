#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;

    scanf("%d", &n);

    string s[n];
    int a[n];

    for(i = 0; i < n; i++)
    {
        a[i] = 0;
        cin >> s[i];

        if(i != 0)
        {
            for(j = 0; j < i; j++)
            {
                if(s[i] == s[j])
                {
                        a[i] = 1;
                        break;
                }
            }
        }
        if(a[i] != 0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

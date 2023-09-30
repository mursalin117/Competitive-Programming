#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int m, a, b, i, len, sum = 1;

    cin >> s;
    len = s.length();
    int x[len+1];
    for(i = 0; i < len; i++)
    {
        if(i == 0) x[i+1] = sum;
        else
        {
            if(s[i] == s[i-1]) sum++;
            x[i+1] = sum;
        }
    }
    scanf("%d", &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d%d", &a, &b);
        sum = x[b] - x[a];
        printf("%d\n", sum);
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  i, sum = 0, len;
    string s;

    int a[5];

    for(i = 1; i < 5; i++) scanf("%d", &a[i]);
    getchar();

    cin >> s;
    len = s.length();

    for(i = 0; i < len; i++) sum += a[s[i]-'0'];

    printf("%d\n", sum);

    return 0;
}

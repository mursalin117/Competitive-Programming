#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, len, sum = 0, d = 1;
    string s;
    scanf("%d", &n);
    getchar();
    cin >> s;
    len = s.length();
    while(sum < len)
    {
        printf("%c", s[sum]);
        sum += d;
        d++;
    }
    return 0;
}

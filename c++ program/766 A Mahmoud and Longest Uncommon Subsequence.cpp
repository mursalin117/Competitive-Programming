#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int al[26], bl[26];

int main()
{
    string a, b;
    int len1, len2, i;
    getline(cin, a);
    getline(cin, b);
    if(a == b) printf("-1\n");
    else
    {
        len1 = a.length();
        len2 = b.length();
        printf("%d\n", max(len1, len2));
    }
    return 0;
}


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, i, sum = 0;
    string s;

    scanf("%ld", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        cin >> s;
        if(s[0] == 'T') sum += 4;
        else if(s[0] == 'C') sum += 6;
        else if(s[0] == 'O') sum += 8;
        else if(s[0] == 'D') sum += 12;
        else sum += 20;
    }
    printf("%ld\n", sum);

    return 0;
}

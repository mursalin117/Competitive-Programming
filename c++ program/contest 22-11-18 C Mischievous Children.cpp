#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[26];

int main()
{
    unsigned long long sum = 1, t, j;
    string s;
    int i, len, com = 0;
    scanf("%ul", &t);
    while(t--)
    {
        cin >> s;
        len = s.length();
        for(i = 0; i < len; i++)
         {
             a[s[i]-'A']++;
             if(com < a[s[i]-'A']) com = a[s[i]-'A'];
         }
        for(j = len; j >= (unsigned long long)com; j--) sum *= j;
        for(i = 0; i < len; i++)
        {
            if(a[i] > 1) sum /= (unsigned long long)a[i];
        }
        printf("%ul\n", sum);
    }
    return 0;
}

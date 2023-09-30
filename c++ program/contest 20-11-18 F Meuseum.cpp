#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0, i, len, d1, d2;
    string s;

    cin >> s;

    len = s.length();

    for(i = 0; i < len; i++)
    {
        if(i == 0)
        {
            d1 = s[i] - 'a';
            d2 = abs(26 - s[i] +'a');
           // cout << d1 << " " << d2 << endl;
        }
        else
        {
            d1 = abs(s[i] - s[i-1]);
            //cout << s[i] << " " << s[i-1] << endl;
            d2 = abs(26 - d1);
           // cout << d1 << " " << d2 << endl;
        }
        sum += min(d1, d2);
    }
    printf("%d\n", sum);

    return 0;
}

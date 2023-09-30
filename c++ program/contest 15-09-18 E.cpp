#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, a;
    string s, d[10], com;

    cin >> s;

    for(i = 0; i < 10; i++)
    {
        cin >> d[i];
        //cout << d[i] << endl;
    }
    a = 0;
    for(i = 0; i < 80; i++)
    {
        com[a] = s[i];
        //cout << com[a] << endl;
        a++;
        if(a == 10)
        {
            com[a] = '\0';
            //cout << com << endl;
            for(j = 0; j < 10; j++)
            {
                if(com.compare(d[j])) cout << j+1;
                else continue;
            }
            a = 0;
        }
    }
    return 0;
}

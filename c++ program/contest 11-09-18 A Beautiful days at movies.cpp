#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>

long int opposite(long int x);

using namespace std;

int main()
{
    long int a,b,s,i,coun = 0,x,d;

    cin >> a >> b >> s;

    for(i = a; i <= b; i++)
    {
        x = opposite(i);
        d = abs(i - x);
        if(d%s == 0) coun++;
    }
    cout << coun << endl;

    return 0;
}

long int opposite(long int x)
{
    long int y,a = 0;
    char ch[100];

    cout << x;
    while(x > 0)
    {
            ch[a] =(char)(x%10);
            x = x/10;
            a++;
    }
    ch[a] = '\0';
    y = atoi(ch);
    cout << y << endl;
    return y;
}

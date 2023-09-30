#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a,b,s,i,j,x,y;
    string ch;

    cin >> a >> b >> s;
    for(i = a; i <= b; i++)
    {
        x = i;
        y = 0;
        while(x > 0)
        {
            ch[y] = (char)(x%10);
            x = x/10;
            y++;
        }
        ch[y] = '\0';
        cout << ch << endl;
    }
}

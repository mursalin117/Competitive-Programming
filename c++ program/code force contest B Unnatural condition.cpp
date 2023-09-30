#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,com,i,a,b;

    cin >> n >> m;

    for(i = 0; ; i++)
    {
        a = n;
        b = n + 0;
        com = sum(a+b);
        if(s <= m) cout << a << "\n" << b << endl;
        else continue;
    }
}

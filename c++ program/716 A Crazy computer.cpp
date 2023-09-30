#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,c,d,x,i,coun = 0,s;

    cin >> n >> c;

    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            cin >> x;
            d = x;
            coun++;
        }
        else
        {
            d = x;
            cin >> x;
            s = x - d;
            if(s > c) coun = 1;
            else ++coun;
        }
    }
    cout << coun << endl;

    return 0;
}

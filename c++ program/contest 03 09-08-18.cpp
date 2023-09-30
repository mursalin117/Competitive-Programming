#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,s;
    string a;

    cin >> n >> a;

    s = n;
    begin :
    for(i = 0; i < a.size(); i++)
    {
        if((a[i] == '0' && a[i+1] == '1') || (a[i] == '1' && a[i+1] == '0'))
        {
            s = s -2;
            for(j = i; j < a.size(); j++)
            {
                a[j] = a[j+2];
            }
            goto begin;
        }
    }
    cout << s << endl;

    return 0;
}

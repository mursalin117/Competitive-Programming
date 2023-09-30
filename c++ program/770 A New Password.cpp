#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,a = 0;
    string s = "abcdefghijklmnopqrstuvwxyz";

    cin >> n >> k;
    if(n == k)
    {
        for(i = 0; i < n; i++) cout << s[i];
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            cout << s[a];
            a++;
            if(a == k) a = 0;
        }
    }
    cout << endl;

    return 0;
}

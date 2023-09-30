#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,i,j,coun = 0,s;
    string a,b;

    cin >> n;
    getchar();
    cin >> a >> b;

    for(i = 0; i < n; i++)
    {
        if(a[i] == '1') coun++;
    }
    x = n - coun;
    s = x * coun;

    if(coun > x) cout << s - x << endl;
    else cout << s - coun << endl;

    return 0;
}

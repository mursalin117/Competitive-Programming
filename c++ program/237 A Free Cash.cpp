#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,coun = 0,m = 0;

    cin >> n;

    int a[n],b[n];

    cin >> a[0] >> b[0];

    for(i = 1; i < n; i++)
    {
        cin >> a[i] >> b[i];

        if(a[i] == a[i-1] && b[i] == b[i-1])
        {
            ++coun;
           // cout << coun << endl;
        }
        else
        {
            if(m < coun) m = coun;
            coun = 0;
        }
    }
    if(coun > m) m = coun;

    cout << m + 1 << endl;

    return 0;
}

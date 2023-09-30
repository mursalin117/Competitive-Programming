#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n, i, j, coun = 0;

    cin >> a >> b >> n;

    if(a % b == 0)
    {
        cout << a;

        for(i = 0; i < n; i++)
        {
            cout << 0;
        }
        return 0;
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            a *= 10;
            //cout << a << endl;
            coun = 0;
            for(j = 0; j <= 9; j++)
            {
                a += j;
                //cout << a << endl;
                if(a % b == 0) break;
                else coun ++;
            }
            if(coun == 10)
            {
                cout << -1 << endl;
                return 0;
            }
        }
        cout << a << endl;
    }
    return 0;
}

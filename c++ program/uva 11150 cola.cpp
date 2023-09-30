/* This problem is solved here by using loop.*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,m;

    while(cin >> n)
    {
        s = 0;
        s = n;
        while(n > 0)
        {
            m = n % 3;
            n = n / 3;
            s = s + n;
            if(n == 0 && m == 2)
            {
                s = s +1;
                break;
            }
            else if(n == 0 && m == 1)
            {
                break;
            }
            else
            {
                n = n + m;
            }
        }
        cout << s << endl;
    }
    return 0;
}

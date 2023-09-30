#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,d,s = 0,coun = 0,i,x;

    cin >> n >> b >> d;

    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            cin >> x;
            if(x > b) continue;
            else
            {
                s = s + x;
                if(s > d)
                {
                    ++coun;
                    s = 0;
                }
                else continue;
            }
        }
        else
        {
            cin >> x;
            if(x > b) continue;
            else
            {
                s = s + x;
                if(s > d)
                {
                    ++coun;
                    s = 0;
                }
                else continue;
            }
        }
    }
    cout << coun << endl;

    return 0;
}

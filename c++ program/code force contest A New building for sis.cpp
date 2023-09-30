#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i,n,k,h,a,b,ta,fa,tb,fb,t_tower,t_floor,d1,d2,x;

    cin >> n >> h >> a >> b >> k;

    for(i = 0; i < k; i++)
    {
        cin >> ta >> fa >> tb >> fb;

        t_tower = abs(ta - tb);
        if(t_tower == 0)
        {
            t_floor = abs(fa - fb);
            cout << t_floor << endl;
        }
        else
        {
            if((fa >= a && fa <=b) && (fb >= a && fb <= b))
            {
                t_floor = abs(fa - fb);
                cout << t_floor + t_tower << endl;
            }
            else
            {
                d1 = abs(fa - a);
                d2 = abs(fa - b);

                if(d1 > d2) x = b;
                else x = a;

                t_floor = min(d1,d2) + abs(x - fb);

                cout << t_tower + t_floor << endl;
            }
        }
    }
    return 0;
}

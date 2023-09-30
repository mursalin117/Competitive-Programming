#include <iostream>
#include <bits/stdc++.h>

int right_angle_triangle(int a1, int b1, int a2, int b2, int a3, int b3);

using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3,s;

    cin >> x1 >>  y1 >> x2 >> y2 >> x3 >> y3;

    s = right_angle_triangle(x1,y1,x2,y2,x3,y3);

    if(s == 1) cout << "RIGHT" << endl;
    else if(s == 2) cout << "ALMOST" << endl;
    else cout << "NEITHER" << endl;

    return 0;
}

int right_angle_triangle(int a1, int b1, int a2, int b2, int a3, int b3)
{
    int d1,d2,d3;

    d1 = ((a1-a2) * (a1-a2)) + ((b1-b2) * (b1-b2));
    d2 = ((a2-a3) * (a2-a3)) + ((b2-b3) * (b2-b3));
    d3 = ((a3-a1) * (a3-a1)) + ((b3-b1) * (b3-b1));
    //cout << d1 << "\t" << d2 << "\t" << d3 << endl;

    if(((d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1)) && d1 != 0 && d2 != 0 && d3 != 0) return 1;
    else
    {
        int fx[4] = {-1, 0, 1, 0};
        int fy[4] = {0, 1, 0, -1};
        int x,y;

        for(int i = 0; i < 4; i++)
        {
            x = a1 + fx[i];
            y = b1 + fy[i];

            d1 = ((x-a2) * (x-a2)) + ((y-b2) * (y-b2));
            d2 = ((a2-a3) * (a2-a3)) + ((b2-b3) * (b2-b3));
            d3 = ((a3-x) * (a3-x)) + ((b3-y) * (b3-y));
            //cout << d1 << "\t" << d2 << "\t" << d3 << endl;

            if(((d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1)) && d1 != 0 && d2 != 0 && d3 != 0) return 2;
            else continue;
        }
        for(int i = 0; i < 4; i++)
        {
            x = a2 + fx[i];
            y = b2 + fy[i];

            d1 = ((a1-x) * (a1-x)) + ((b1-y) * (b1-y));
            d2 = ((x-a3) * (x-a3)) + ((y-b3) * (y-b3));
            d3 = ((a3-a1) * (a3-a1)) + ((b3-b1) * (b3-b1));
            //cout << d1 << "\t" << d2 << "\t" << d3 << endl;

            if(((d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1)) && d1 != 0 && d2 != 0 && d3 != 0) return 2;
            else continue;
        }
        for(int i = 0; i < 4; i++)
        {
            x = a3 + fx[i];
            y = b3 + fy[i];

            d1 = ((a1-a2) * (a1-a2)) + ((b1-b2) * (b1-b2));
            d2 = ((a2-x) * (a2-x)) + ((b2-y) * (b2-y));
            d3 = ((x-a1) * (x-a1)) + ((y-b1) * (y-b1));
            //cout << d1 << "\t" << d2 << "\t" << d3 << endl;

            if(((d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1)) && d1 != 0 && d2 != 0 && d3 != 0) return 2;
            else continue;
        }
    }
    return 0;
}

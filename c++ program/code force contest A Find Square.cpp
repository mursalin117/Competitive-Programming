#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,rMin,rMax,cMin,cMax,r,c;

    cin >> n >> m;
    getchar();

    int dr = n,dc = m;
    //cout << dr << " " << dc << endl;
    char s[n][m];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> s[i][j];
            if(s[i][j] == 'B' && i < dr && j < dc)
            {
                rMin = i;
                //cout << rMin << endl;
                cMin = j;
                //cout << cMin << endl;
                dr = i;
                //cout << dr;
                dc = j;
                //cout << " " <<dc << endl;
            }
            if(s[i][j] == 'B' && i >= dr && j >= dc)
            {
                rMax = i;
                //cout << "rMax" << rMax;
                cMax = j;
                //cout << " cMax" << cMax << endl;
                dr = i;
                //cout << dr;
                dc = j;
               // cout << " " << dc << endl;
            }
            //cout << s[i][j];
        }
        //cout << "\n";
    }
    rMin = rMin + 1;
    rMax = rMax + 1;
    cMin = cMin + 1;
    cMax = cMax + 1;

    r = (rMin+rMax)/2;
    c = (cMin+cMax)/2;
    cout << r << " " << c << endl;

    return 0;
}

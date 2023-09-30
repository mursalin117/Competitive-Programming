#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c;
    int i,j,coun = 0,len;

    cin >> a >> b;

    b = c;
    if((a.compare(b)) == 0) cout << "Yes" << endl;
    else
    {
        for(i = 0; i < a.size(); i++)
        {
            for(j = 0; j < b.size(); j++)
            {
                if(a[i] == b[j])
                {
                    cout << a[i];
                    b[j] = '0';
                    coun++;
                    break;
                }
            }
        }
        cout << coun;
        len = a.size();
        cout << "\n" << len;
        if(coun != len) cout << "No" << endl;
        else
        {
            b = c;
            begin:
            for(i = 0; i < len; i++)
            {
                if(i != (len-1))
                {
                    c[0] = a[i+1];
                    a[i+1] = a[i];
                    a[i] = c[0];
                }
            }
            if((a.compare(b)) == 0) cout << "Yes" << endl;
            else goto begin;
        }
    }
    return 0;
}


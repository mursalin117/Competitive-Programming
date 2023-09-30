#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,len,coun = 0,com = 0,m;
    string s;

    cin >> s;

    len = s.size();

    for(i = 0; i < len; i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            if(i == 0)
            {
                coun = 1;
                if(coun > com)
                {
                    com = coun;
                    coun = 0;
                }
                cout << com << endl;
            }
            else
            {
                //cout << s[i] << " " << i << "\t" << s[m] << " " << m << endl;
               // coun = (i - m);
                //cout << coun << endl;
                //if(coun > com) com = coun;
                //cout << com << endl;
                if(coun > com)
                {
                    com = coun;
                    coun = 0;
                }
                cout << com << endl;
            }
            //m = i;
        }
        else coun++;
        /*if(i == len-1)
        {
            //cout << s[i] << " " << i << "\t" << s[m] << " " << m << endl;
            coun = len - m;
            //cout << coun << endl;
            if(coun > com) com = coun;
            //cout << com << endl;
        }*/
    }
    if(coun > com) com = coun;
    cout << com << endl;

    cout << com << endl;

    return 0;
}

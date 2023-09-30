#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i,j,coun=0,s_t=0,n;
    string s,t,d;
    vector < int > v;

    cin >> n >> s >> t;

    if(!(s.compare(t))) cout << coun << endl;
    else
    {
        d = s;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(t[i] == s[j])
                {
                    s[j] = '0';
                    s_t++;
                    break;
                }
            }
        }
        cout << s_t << "\n";
        if(s_t != n) cout << "-1" << endl;
        else
        {
            s = d;
            begin :
            for(i = 0; i < n; i++)
            {
                if(s[i] == t[i]) continue;
                else
                {
                    cout << i << " " << s[i]<<" "<<t[i];
                    swap(s[i], s[i+1]);
                    cout <<" " << s[i]<<" "<<t[i]<<endl;
                    coun++;
                    v.push_back(i);
                }
            }
             if((s.compare(t) == 0) && coun <= 10000)
             {
                    cout << coun << "\n";
                    for(j = 0; j < v.size(); j++)
                        cout << v[j] << " ";
             }
             else goto begin;
        }
    }
    return 0;
}

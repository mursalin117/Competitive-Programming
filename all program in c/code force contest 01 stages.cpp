#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int i,j,s=0,count=0,n,m;
    cin >> n >> m;
    string ch,com;
    cin >> ch;
    sort(ch.begin(), ch.end());
    for(i=0; i<n; i++)
    {
        if(i == 0)
        {
            s = s + (ch[i] - 'a') + 1;
            count++;
            com[0] = ch[i];
            if(count == m) break;
        }
        else if(ch[i] > (com[0]+1 ))
        {
            s = s + (ch[i] - 'a') + 1;
            com[0] = ch[i];
            count++;
            if(count == m) break;
        }
        else continue;
    }
    if(s != 0 && count == m) cout << s << endl;
    else cout << "-1" << endl;
    return 0;
}

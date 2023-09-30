#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,len;
    string s;

    cin >> s;

    len = s.size();
    for(i = 0; i < len; i++)
    {
        if(s[i] == 'B' && s[i+1] == 'A')
        {
            j = i + 2;
            for(j = j; j < len; j++)
            {
                if(s[j] == 'A' && s[j+1] == 'B')
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
            for(j = i+1; j < len; j++)
            {
                if(s[j] == 'A' && s[j+1] == 'B')
                {
                    k = j + 2;
                    for(k = k; k < len; k++)
                    {
                        if(s[k] == 'B' && s[k+1] == 'A')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }
            }
            break;
        }
        else if(s[i] == 'A' && s[i+1] == 'B')
        {
            j = i +2;
            for(j = j; j < len; j++)
            {
                if(s[j] == 'B' && s[j+1] == 'A')
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
            for(j = i + 1; j < len; j++)
            {
                if(s[j] == 'B' && s[j+1] == 'A')
                {
                    k = j + 2;
                    for(k = k; k < len; k++)
                    {
                        if(s[k] == 'A' && s[k+1] == 'B')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }
            }
            break;
        }
    }
    cout << "NO" << endl;

    return 0;
}

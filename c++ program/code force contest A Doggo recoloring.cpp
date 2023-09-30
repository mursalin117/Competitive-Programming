#include <iostream>
#include <string>
#include <bits/stdc++.h>

int a[26];

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    if(n == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
            for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'a')
            {
                a[0]++;
                if((a[0]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'b')
            {
                a[1]++;
                if((a[1]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'c')
            {
                a[2]++;
                if((a[2]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'd')
            {
                a[3]++;
                if((a[3]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'e')
            {
                a[4]++;
                if((a[4]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'f')
            {
                a[5]++;
                if((a[5]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'g')
            {
                a[6]++;
                if((a[6]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'h')
            {
                a[7]++;
                if((a[7]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'i')
            {
                a[8]++;
                if((a[8]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'j')
            {
                a[9]++;
                if((a[9]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'k')
            {
                a[10]++;
                if((a[10]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'l')
            {
                a[11]++;
                if((a[11]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'm')
            {
                a[12]++;
                if((a[12]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'n')
            {
                a[13]++;
                if((a[13]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'o')
            {
                a[14]++;
                if((a[14]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'p')
            {
                a[15]++;
                if((a[15]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'q')
            {
                a[16]++;
                if((a[16]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'r')
            {
                a[17]++;
                if((a[17]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 's')
            {
                a[18]++;
                if((a[18]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 't')
            {
                a[19]++;
                if((a[19]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'u')
            {
                a[20]++;
                if((a[20]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'v')
            {
                a[21]++;
                if((a[21]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'w')
            {
                a[22]++;
                if((a[22]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'x')
            {
                a[23]++;
                if((a[23]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'y')
            {
                a[24]++;
                if((a[24]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(s[i] == 'z')
            {
                a[25]++;
                if((a[25]) >= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
        cout << "No" << endl;
        return 0;
    }
}

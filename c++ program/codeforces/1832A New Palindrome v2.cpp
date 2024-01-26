#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int ch[26] = {0};
        for (int i = 0; i < str.size(); i++)
        {
            ch[str[i] - 'a']++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (ch[i] >= 2)
            {
                cnt++;
            }
        }
        if (str.size() < 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (cnt >= 2) {
                cout << "YES" << endl;
            } 
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
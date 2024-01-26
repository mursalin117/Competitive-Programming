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
        int check = 0;
        int n = 255; // flag
        for (int i = 0; i < 26; i++)
        {
            if (ch[i] >= 2)
            {
                cnt++;
            }
            if (ch[i]) 
            {
                check++;
            }
            if (ch[i]%2 ==1) {
                n = i;
            }
        }
        if (str.size() < 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (str.size()%2 == 0) {
                if (cnt >= 2) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
            else {
                if (check == 2 && n < 26 && ch[n] == 1) {
                    cout << "NO" << endl;
                }
                else if (check == 2 && n < 26 && ch[n] > 1) {
                    cout << "YES" << endl;
                }
                else if (check > 2) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
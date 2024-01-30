#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        reverse(str.begin(), str.end());
        bool check = false;
        int n = str.length();
        for (int i = 0; i < n; i++) {
            if (str[i] >= '0' && str[i] <= '4') {
                check = true;
                continue;
            }
            else {
                
                if (str[i+1] >= '0' && str[i+1] <= '4' && i < n-1) {
                    // cout << str[i] << " : " << i << " == ";
                    for (int j = 0; j <= i; j++) {
                        str[j] = '0';
                    }
                    str[i+1] = str[i+1] + 1;
                    // cout << str << endl;
                    check = true;
                }
                if (i == n-1 && (str[i] >= '5' && str[i] <= '9')) {
                    // cout << str[i] << " << ";
                    for (int j = 0; j < n; j++) {
                        str[j] = '0';
                    }
                    str = "1" + str;
                    // cout << str << endl;
                    check = false;
                }
            }
        }
        if (check) {
            reverse(str.begin(), str.end());
        }
        cout << str << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt = 0; 
        for (int j = 0; j < n; j++) {
            if (str[j] == '.' && str[j+1] =='.' && str[j+2] == '.') {
                cnt = 2;
                break;
            }
            else if (str[j] == '.') {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
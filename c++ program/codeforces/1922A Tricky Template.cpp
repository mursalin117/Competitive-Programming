#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == c[i] || b[i] == c[i]) {
                cnt++;
            }
        }
        if (cnt >= 0 && cnt <= n-1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        if (x % n == 0) {
            cout << x / n << endl;
        }
        else {
            set <int> s;
            for (int i = 1; i * i <= x; i++) {
                if (x % i == 0) {
                    s.insert(i);
                    s.insert(x/i);
                }
            }
            
            // int res = 1;
            // for (auto i : s) {
            //     long long temp = i * (n-1);
            //     if (temp >= x) {
            //         break;
            //     }
            //     else {
            //         if ((x - temp) % i == 0) {
            //             res = i;
            //         }
            //     }
            // }
            
            int res = 1;
            for (auto i : s) {
                if (x / i >= n) {
                    res = i;
                }
                else {
                    break;
                }
            }
            cout << res << endl;
        }
    }
    return 0;
}
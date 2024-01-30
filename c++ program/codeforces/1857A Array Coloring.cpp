#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        while (n--) {
            int x;
            cin >> x;
            if (x%2 == 1) {
                cnt++;
            }
        }
        
        if (cnt%2 ==1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
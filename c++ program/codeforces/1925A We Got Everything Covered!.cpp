#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int res = n * k;
        for (int i = 0; i < res; i++) {
            cout << (char)('a' + i%k);
        }
        cout << endl;
    }
    return 0;
}
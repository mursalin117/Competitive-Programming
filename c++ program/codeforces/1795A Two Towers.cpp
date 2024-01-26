#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int cntA = 0, cntB = 0;
        for (int i = 0; i < n-1; i++) {
            if (a[i] == a[i+1]) {
                cntA++;
            }
        }
        for (int i = 0; i < m-1; i++) {
            if (b[i] == b[i+1]) {
                cntB++;
            }
        }
        if (cntA == 0 && cntB == 0) {
            cout << "YES" << endl;
        }
        else if (cntA == 1 && cntB == 0 && a[n-1] != b[m-1]) {
            cout << "YES" << endl;
        }
        else if (cntA == 0 && cntB == 1 && a[n-1] != b[m-1]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
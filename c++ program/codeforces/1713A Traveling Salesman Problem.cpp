#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int minX = 0, minY = 0, maxX = 0, maxY = 0;
        while(n--) {
            int x, y;
            cin >> x >> y;
            if (minX > x) {
                minX = x;
            }
            if (minY > y) {
                minY = y;
            }
            if (maxX < x) {
                maxX = x;
            }
            if (maxY < y) {
                maxY = y;
            }
        }
        int res = 2 * (maxX + maxY - minX - minY); 
        cout << res << endl;
    }
    return 0;
} 
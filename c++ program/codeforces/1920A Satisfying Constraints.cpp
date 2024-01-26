#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int l = 0, r = 1000000001;
        int arr[n-2] = {0};
        int p = 0;
        while(n--) {
            int a, x;
            cin >> a >> x;
            if (a == 1) {
                if (l <= x) {
                    l = x;
                }
            } 
            else if (a == 2) {
                if (r >= x) {
                    r = x;
                }
            }
            else {
                arr[p++] = x;
            }
        }
        int cnt = 0;
        for (int i = 0; i < p; i++) {
            if (arr[i] >= l && arr[i]<= r) {
                cnt++;
            }
        }
        if (r-l-cnt+1 > 0) {
            cout << r-l-cnt+1 << endl;
        } 
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mp[300009] = {0};
        // int arr[1000000] = {0};
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            // arr[x] = 1;
        }
        int cnt = 0;
        long long total = 0;
        for (int i = 0; i < 300009; i++) {
            if (mp[i]) {
                if (mp[i] >= 3) {
                    total += ((long long)mp[i] * (mp[i]-1) * (mp[i]-2)) / 6;
                } 
                if (cnt > 0) {
                    total += cnt * (((long long)mp[i] * (mp[i]-1)) / 2);
                }
                cnt += mp[i];
            } 
        }
        cout << total << endl;
    }
    return 0;
}
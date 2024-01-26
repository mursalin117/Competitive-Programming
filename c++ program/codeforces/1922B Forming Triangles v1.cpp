#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x;
        map <int, int> mp;
        set <int> s;
        for (int i = 0; i < n; i++) {
            cin >> x;
            // long long temp = pow(2, x);
            // mp[temp]++;
            // s.insert(temp);
            mp[x]++;
            s.insert(x);
        }
        // sort(s.begin(), s.end());
        int cnt = 0;
        long long total = 0;
        for (auto x:s) {
            if (mp[x] >= 3) {
                total += ((long long)mp[x] * (mp[x]-1) * (mp[x]-2)) / 6;
            } 
            if (cnt > 0) {
                total += cnt * (((long long)mp[x] * (mp[x]-1)) / 2);
            }
            cnt += mp[x];
        }
        cout << total << endl;
    }
    return 0;
}
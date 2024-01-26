#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long arr[n];
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                cnt++;
            }
        }
        if (cnt == 0 || cnt == n) {
            long long res = 2;
            while (true) {
                res = res << 1;
                // res += 2; // solution ok but tle got
                // cout << res << endl;
                long long a[n];
                int p = 0;

                for (int i = 0; i < n; i++) {
                    long long temp = arr[i] % res;
                    // cout << temp << " ";
                    // cout << p << " ";
                    if (i == 0) {
                        a[p++] = temp;
                    }
                    else {
                        bool check = true;
                        for (int j = 0; j < p; j++) {
                            if (a[j] == temp) {
                                check = false;
                                break;
                            }
                        }
                        if (check) {
                            a[p++] = temp;
                            if (p > 2) {
                                break;
                                // break;
                            }
                        }
                    } 
                    if (p > 2) {
                        break;
                    }
                }
                // cout << endl;
                if (p == 2) {
                    break;
                }
            }
            cout << res << endl;
        }
        else {
            cout << 2 << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        long long cnt = 0;
        int maxVal = 0;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }

            if (i == 0) {
                cnt += arr[i];
            }
            else {
                if (arr[i] > arr[i-1]) {
                    cnt += (arr[i]-arr[i-1]);
                }
            }
        }
        // cout << maxVal << "   " << cnt << endl;
        if (maxVal == cnt) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
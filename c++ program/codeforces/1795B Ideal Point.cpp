#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[51] = {0};
        int minL = 99, maxR = 0;
        int index, maxCnt = 0;
        for(int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            if (l <= k && k <= r) {
                if (minL > l) {
                    minL = l;
                } 
                if (maxR < r) {
                    maxR = r;
                }
                for (int j = l; j <= r; j++) {
                    arr[j]++;
                    if (arr[j] > maxCnt) {
                        maxCnt = arr[j];
                        index = j;
                    }
                }
            }
        }
        int cnt = 0;
        for (int i = minL; i <= maxR; i++) {
            if (arr[i] == maxCnt) {
                cnt++;
            }
        }
        if (arr[index] > 1 && cnt == 1) {
            cout << "YES" << endl;
        }
        else if(arr[index] == 1 && minL == maxR) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
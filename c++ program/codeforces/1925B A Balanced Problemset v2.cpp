#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        if (x % n == 0) {
            cout << x / n << endl;
        }
        else {
            int arr[1000000];
            int p = 0;
            for (int i = 1; i * i <= x; i++) {
                if (x % i == 0) {
                    arr[p++] = i;
                    arr[p++] = x/i; 
                }
            }
            sort(arr, arr+p);
            int res = 1;
            for (int i = 0; i < p; i++) {
                long long temp = arr[i] * (n-1);
                if (temp >= x) {
                    break;
                }
                else {
                    if ((x - temp) % arr[i] == 0) {
                        res = arr[i];
                    }
                }
            }
            cout << res << endl;
        }
    }
    return 0;
}
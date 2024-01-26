#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string str;
        int arr[26] = {0};
        cin >> n >> str;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            arr[str[i]-'A']++;
            if (arr[str[i]-'A'] == (str[i]-'A' + 1)) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
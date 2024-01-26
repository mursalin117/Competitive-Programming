#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int len = str.size();
    for (int i = len/2; i < len-1; i++) {
        cout << str[i] << "+";
    }
    cout << str[len-1] << endl;

    return 0;
}
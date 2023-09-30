#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    string s;

    scanf("%d", &n);
    getchar();
    cin >> s;

    sort(s.begin(), s.end());

    cout << s << endl;

    return 0;
}

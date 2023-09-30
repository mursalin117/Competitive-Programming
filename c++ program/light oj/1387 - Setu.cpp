#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, i, j, total, x;
    string s;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        getchar();
        total = 0;
        printf("Case %d:\n", i+1);
        for(j = 0; j < n; j++){
            cin >> s;
            if(s[0] == 'd'){
                scanf("%d", &x);
                total += x;
            }
            else printf("%d\n", total);
        }
    }
    return 0;
}

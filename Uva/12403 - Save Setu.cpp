#include <bits/stdc++.h>

using namespace std;

int main(){
    int sum = 0, t, x;
    string s;
    scanf("%d", &t);
    getchar();
    while(t--){
        cin >> s;
        if(s[0] == 'd'){
            scanf("%d", &x);
            getchar();
            sum += x;
        }
        else printf("%d\n", sum);
    }
    return 0;
}

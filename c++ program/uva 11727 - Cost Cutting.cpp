#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, i, a[3];
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d%d%d",  &a[0], &a[1], &a[2]);
        sort(a, a+3);
        printf("Case %d: %d\n", i, a[1]);
    }
    return 0;
}

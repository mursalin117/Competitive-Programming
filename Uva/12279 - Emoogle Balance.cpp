#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, count0, count1, n, x;
    for(i = 1; ; i++){
        scanf("%d", &n);
        if(n == 0) break;
        else{
            count0 = 0;
            count1 = 0;
            while(n--){
                scanf("%d", &x);
                if(x == 0) count0++;
                else count1++;
            }
            printf("Case %d: %d\n", i, count1 - count0);
        }
    }
    return 0;
}

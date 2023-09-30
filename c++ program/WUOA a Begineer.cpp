#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, k, l, t, fr, amp;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &amp, &fr);
        for(i = 0; i < fr; i++){
            for(j = 1; j <= amp; j++){
                for(k = 1; k <= j; k++){
                    printf("%d", j);
                }
                printf("\n");
            }
            for(j = amp-1; j > 0; j--){
                for(k = 1; k <= j; k++){
                    printf("%d", j);
                }
                printf("\n");
            }
            if(i != fr-1) printf("\n");
            else continue;
        }
        if(t > 0) printf("\n");
        else continue;
    }
    return 0;
}

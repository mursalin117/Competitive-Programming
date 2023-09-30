#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, i, sum, mi, ma;
    float avg;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int a[n], com, dif, c;
        sum = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
            sum += a[i];
            if(i == 0)
                mi = ma = a[i];
            else{
                if(mi > a[i]) mi = a[i];
                else if(ma < a[i]) ma = a[i];
            }
        }
        avg = (float)sum/ (float)n;
        avg += 0.5;
        com = (int)avg;
        dif = abs(com - a[0]);
        c = a[0];
        for(i = 1; i < n; i++){
            if(abs(com - a[i]) < dif){
                dif = abs(com - a[i]);
                c = a[i];
            }
        }
        printf("%d\n", ((c - mi) + (ma - c)) * 2);
    }
    return 0;
}

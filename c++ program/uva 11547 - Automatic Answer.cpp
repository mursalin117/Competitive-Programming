#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, sum;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        sum = (((n * 63) + 7492) * 5) - 498;
        sum /= 10;
        printf("%d\n", abs(sum % 10));
    }
    return 0;
}

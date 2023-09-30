#include <bits/stdc++.h>

using namespace std;

int main(){
    int t1 = 0, t2 = 0, i, n;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    for(i = 0; i < n; i++){
        if(i < n/2) t1 += a[i];
        else t2 += a[i];
    }
    printf("%d", t1*t1 + t2*t2);
    return 0;
}

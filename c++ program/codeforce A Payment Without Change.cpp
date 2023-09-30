#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, n, s, d, c;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &a, &b, &n, &s);
        if(a * n == s) printf("Yes\n");
        else if(b == s) printf("Yes\n");
        else if((a*n < s) && ((a*n)+ b >= s)) printf("Yes\n");
        else printf("No\n");
    }
}

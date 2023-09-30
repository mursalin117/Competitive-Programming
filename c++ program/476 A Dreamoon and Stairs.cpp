#include <bits/stdc++.h>

using namespace std;

int getNumber(int n, int m){
    int d, c;
    if(n < m) return -1;
    else{
        if(n%2 == 0 && (n/2) % m == 0) return n/2;
        else{
            d = n/2;
            c = abs((d * 2)-n);
            while((c+d) % m != 0){
                d -= 1;
                c = abs((d * 2)-n);
            }
            return c+d;
        }
    }
}

int main(){
    int n, m, r;
    scanf("%d%d", &n, &m);
    r = getNumber(n, m);
    printf("%d\n", r);
    return 0;
}


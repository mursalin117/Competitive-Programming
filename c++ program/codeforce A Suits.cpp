#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, f, t1, t2, com1, com2;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    if(f > e){
        com1 = min(b, c);
        com1 = min(com1, d);
        t1 = f * com1;
        com2 = d - com1;
        com2 = min(com2, a);
        t2 = com2 * e;
        printf("%d\n", t1+t2);
    }
    else{
        com2 = min(a, d);
        t2 = e * com2;
        com1 = d - com2;
        com1 = min(com1, b);
        com1 = min(com1, c);
        t1 = f * com1;
        printf("%d\n", t1+t2);
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, v1, v2, t1, t2, d1, d2;
    scanf("%d%d%d%d%d", &s, &v1, &v2, &t1, &t2);
    d1 = (t1 * 2) + (v1 * s);
    d2 = (t2 * 2) + (v2 * s);
    if(d1 < d2) printf("First");
    else if(d1 > d2) printf("Second");
    else printf("Friendship");
    return 0;
}

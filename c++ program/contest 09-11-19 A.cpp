#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, e[3], n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e[0], &e[1], &e[2]);
        //cout << a << b << c << d << e[0] << e[1] << e[2] << endl;
        sort(e, e+3);
        int r = a + b + c + d + ((e[1] + e[2])/2);
        //cout << r << endl;
        printf("Case %d: ", i+1);
        if(r >= 90) printf("A\n");
        else if(r >= 80 && r != 90) printf("B\n");
        else if(r >= 70 && r != 80) printf("C\n");
        else if(r >= 60 && r != 70) printf("D\n");
        else printf("F\n");
    }
}

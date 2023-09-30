#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[4], i;
    for(i = 0; i < 4; i++)
        scanf("%d", &a[i]);
    sort(a, a+4);
    for(i = 0; i < 3; i++)
        printf("%d ", a[3] - a[i]);
    return 0;
}

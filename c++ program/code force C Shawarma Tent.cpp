#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, sx, sy, x, y, coun = 0, tempx, tempy;
    scanf("%d%d%d", &n, &sx, &sy);
    int arrX[n], arrY[n];
    for(i = 0; i < n; i++){
        scanf("%d%d", &arrX[i], &arrY[i]);
        if(arrX[i] >= sx) coun++;
    }
    if(coun > n/2){
        printf("%d\n", coun);
        tempx = sx + 1;
        tempy = sy;
        if(tempx > 1000000000 ){
            tempy += 1;
            tempx -= 1;
        }
        printf("%d %d\n", tempx, tempy);
    }
    else{
        printf("%d\n", n-coun);
        tempx = sx-1;
        tempy = sy;
        if(tempx < 0){
            tempy -= 1;
            tempx += 1;
        }
        printf("%d %d\n", tempx, tempy);
    }
    return 0;
}

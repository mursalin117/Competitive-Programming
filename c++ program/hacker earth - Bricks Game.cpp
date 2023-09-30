#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, sum;
    scanf("%d", &n);
    for(i = 1; ; i++){
        sum = ((i*(i+1))/2)*3;
        if(sum < n)
            continue;
        else{
            sum = ((i*(i-1))/2)*3;
            int diff = abs(sum - n);
            if(diff <= i)
                printf("Patlu\n");
            else
                printf("Motu\n");
            break;
        }
    }
    return 0;
}

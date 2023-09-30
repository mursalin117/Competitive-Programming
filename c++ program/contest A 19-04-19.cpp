#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    map <double, int> mp;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int comInt;
        double comDob, arr[n];
        if(n % 2 == 0){
            comInt = 100/n;
            for(int i = 0; i <= 100; i += comInt){
                for(int j = 0; j <= 100; j += comInt){
                    double mul = (double)i *
                }
            }
        }
        else comDob = 100.0/(double)n;
    }
    return 0;
}

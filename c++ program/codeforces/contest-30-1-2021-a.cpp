#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n, sum, cnt, x, ci;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        cnt = 0;
        ci = 1;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x > ci){
                //cout << "ci1 " << ci << endl;
                cnt = x - ci;
                sum += cnt;
                //cout << "cnt " << cnt << endl;
                ci += cnt;
                //cout << "ci2 " << ci << endl;
            }
            //cout << "sum " << sum << endl;
            ci++;
            //cout << "ci3 " << ci << endl;
        }
        //cout << sum << endl;
    }
    return 0;
}

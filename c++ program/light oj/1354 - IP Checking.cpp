#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, i, j, t, n, k;
    char ch;
    string s;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d%c%d%c%d%c%d", &a, &ch, &b, &ch, &c, &ch, &d);
        getchar();
        cin >> s;
        n = 0;
        for(j = 0, k = 7; j < 8; j++, k--){
            n += (s[j] - '0') * pow(2, k);
        }
        //cout << n << " ";
        if(n == a){
                n = 0;
            for(j = 9, k = 7; j < 17; j++, k--){
                n += (s[j] - '0') * pow(2, k);
            }
            //cout << n << " ";
            if(n == b){
                n = 0;
                for(j = 18, k = 7; j < 26; j++, k--){
                    n += (s[j] - '0') * pow(2, k);
                }
                //cout << n << " ";
                if(n == c){
                    n = 0;
                    for(j = 27, k = 7; j < 35; j++, k--){
                        n += (s[j] - '0') * pow(2, k);
                    }
                    //cout << n << endl;
                    if(n == d) printf("Case %d: Yes\n", i+1);
                    else printf("Case %d: No\n", i+1);
                }
                else printf("Case %d: No\n", i+1);
            }
            else printf("Case %d: No\n", i+1);
        }
        else printf("Case %d: No\n", i+1);
    }
    return 0;
}

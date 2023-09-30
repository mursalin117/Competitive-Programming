#include <bits/stdc++.h>

using namespace std;

int main(){
    int d1, d2, d3, d4;
    string s;
    getline(cin, s);
    d1 = s[0] - '0' + s[1] - '0';
    d2 = s[3] - '0' + s[4] - '0';
    d3 = s[4] - '0' + s[5] - '0';
    d6 = s[7] - '0' + s[8] - '0';
    //cout << c1 << d1 << d2 << d3 << d4 << d5 << d6 << d7 << endl;
    if(s[2] != 'A' || s[2] != 'E' || s[2] != 'I' || s[2] != 'O' || s[2] != 'U' || s[2] != 'Y'){
        if((d1 % 2 == 0) && ((d2 % 2 == 0) && ((d3 % 2 == 0) && ((d4 % 2 == 0)){
            printf("valid\n");
            return 0;
        }
    }
    printf("invalid\n");
    return 0;
}

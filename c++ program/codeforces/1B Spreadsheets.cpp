#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, num, t;
    string s, num1, num2, st;
    
    scanf("%d", &t);
    while (t--){
        cin >> s;
        num1 = "";
        num2 = "";
        if(s[0] == 'R' && (s[1] >= '0' && s[1] <= '9')){
            i = 1;
            while(s[i] >= '0' && s[i] <= '9'){
                num1 += s[i];
                i++;
            }
            if(s[i] == 'C'){
                //cout << num1 << endl;
                i = i + 1;
                while(s[i] >= '0' && s[i] <= '9'){
                    num2 += s[i];
                    i++;
                }
                //cout << num2 << endl;
                num = stoi(num2);
                //cout << "int = " << num << endl;
                
                st = "";
                while (num > 0){
                    int com = num % 26;
                    if(com == 0){
                        st = (char)('A' + 25) + st;
                        num = num - 1;
                    }
                    else st = (char)('A' + com - 1) + st;
                    num /= 26;
                }
                cout << st << num1 << endl;
            }
            else{
                cout << "R" << num1 << "C" << 18 << endl;    
            }
        }
        else{
            num1 = "";
            num2 = "";
            num = (s[0] - 'A' + 1);
            for(i = 1; i < s.size(); i++) {
                if(s[i] >= 'A' && s[i] <= 'Z')
                    num = num * 26 + (s[i] - 'A' + 1);
                else num1 += s[i];
            }
            cout << "R" << num1 << "C" << num << endl;
        }    
    }
    
    return 0;
}
// we should think of the combination as the three len word can be
// like owe and tno or tne and owo. So the combination must be considered.
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, len;
    string s;
    scanf("%d", &n);
    getchar();
    while(n--){
        getline(cin, s);
        len = s.length();
        if(len == 5) printf("3\n");
        else{
            if(s[0] == 'o' && s[2] == 'e')printf("1\n");
            else if(s[0] == 'o' && s[1] == 'n')printf("1\n");
            else if(s[1] == 'n' && s[2] == 'e')printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}

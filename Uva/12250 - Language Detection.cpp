#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, s1 = "HELLO", s2 = "HOLA", s3 = "HALLO", s4 = "BONJOUR", s5 = "CIAO", s6 = "ZDRAVSTVUJTE", s7 = "#";
    int i = 1;
    while(getline(cin, s)){
        if(s == s7) break;
        else if(s == s1) printf("Case %d: ENGLISH\n", i);
        else if(s == s2) printf("Case %d: SPANISH\n", i);
        else if(s == s3) printf("Case %d: GERMAN\n", i);
        else if(s == s4) printf("Case %d: FRENCH\n", i);
        else if(s == s5) printf("Case %d: ITALIAN\n", i);
        else if(s == s6) printf("Case %d: RUSSIAN\n", i);
        else printf("Case %d: UNKNOWN\n", i);
        i++;
    }
    return 0;
}

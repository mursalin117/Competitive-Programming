#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        string s;
        getline(cin, s);
        int len = s.length(), i;
        stack <char> st;
        for(i = 0; i < len; i++)
        {
            char *ch = st.top();
            cout << "ch = " << ch << endl;
            if(*ch == '(' && s[i] == ')' && !st.empty()) st.pop();
            else if(*ch == '[' && s[i] == ']' && !st.empty()) st.pop();
            else st.push(s[i]);
        }
        if(st.empty() == 0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d",&t);
    //cin.ignore();
	getchar();

    while(t--)
    {
        string s;

        getline(cin,s);

        stack <char> st;

        int len = s.length(), i;

        for(i = 0; i < len; i++)
        {
            //char ch = st.top();
            if(!st.empty() && s[i]==')' && st.top() =='(')  st.pop();
            else if(!st.empty() && s[i]==']' && st.top() =='[') st.pop();
            else st.push(s[i]);
        }

        if(st.empty()) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

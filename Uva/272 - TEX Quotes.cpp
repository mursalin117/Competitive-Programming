#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len, i, coun = 0;
    string s;
    while(getline(cin, s))
    {
        len = s.length();
        for(i = 0; i < len; i++)
        {
            if(s[i] == '"')
            {
                coun++;
                if(coun % 2 != 0) printf("``");
                else printf("''");
            }
            else printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}

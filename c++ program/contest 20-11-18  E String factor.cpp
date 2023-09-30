#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, len, j;
    string s;

    cin >> s;
    len = s.length();

    for(i = 0; i < len; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
        {
            for(j = i + 2; j < len; j++)
            {
                if(s[j] == 'B' && s[j+1] == 'A')
                {
                    printf("YES\n");
                    return 0;
                }
            }
            for(j = i + 1; j < len; j++)
            {
                if(s[j] == 'B' && s[j+1] == 'A')
                {
                    for(j = j + 2; j < len; j++)
                    {
                        if(s[j] == 'A' && s[j+1] == 'B')
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                }
            }
            break;
        }
        else if(s[i] == 'B' && s[i+1] == 'A')
        {
            for(j = i + 2; j < len; j++)
            {
                if(s[j] == 'A' && s[j+1] == 'B')
                {
                    printf("YES\n");
                    return 0;
                }
            }
            for(j = i + 1; j < len; j++)
            {
                if(s[j] == 'A' && s[j + 1] == 'B')
                {
                    for(j = j + 2; j < len; j++)
                    {
                        if(s[j] == 'B' && s[j+1] == 'A')
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                }
            }
            break;
        }
    }
    printf("NO\n");

    return 0;
}

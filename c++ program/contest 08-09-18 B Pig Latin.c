//#include <iostream>
#include <stdio.h>
#include <string.h>
//#include <bits/stdc++.h>

//using namespace std;

int main()
{
    int n, i, j, len;
    char ch, s[100000];
    //string s;

    //cin >> n;
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        //cin >> s;
        gets(s);
        //len = s.size();
        len = strlen(s);
        for(j = 0; j < len; j++)
        {
           // printf("%c", s[len-1]);
            if(j == 0)
            {
                ch = s[j] + 32;
                //cout << ch;
                continue;
            }
            else if(j == 1) printf("%c",s[j] - 32);
            //else if(j == len-1) printf("%c", s[j]);
            else if(s[j] == ' ' || s[j+1] == '\0')
            {
                //cout << ch << "ay ";
                if(s[j] == ' ') printf("%cay ",ch);
                else printf("%c%cay ", s[len-1], ch);
            }
            else if(s[j-1] == ' ')
            {
                ch = s[j];
               // printf("%c", ch);
            }
            //else if(j == len-1) printf("%c", s[j]);
            else
            {
                //cout << s[j];
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}


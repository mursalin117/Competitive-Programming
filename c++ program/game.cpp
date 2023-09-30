#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, len;
    char ch;

    printf("Enter the writing letter of the car : ");
    ch = getchar();

    printf("Enter the distance : ");
    scanf("%d", &len);

    char s[len];
    for(i = 0; i < len; i++) s[i] = ' ';

    for(i = 0; i < len; i++)
    {
        if(i == 0)
        {
            s[i] = ch;
            printf("%c", ch);
        }
        else if(i == len-1)
        {
            s[i] = ch;
            printf("%c\n", ch);
        }
        else
        {
            s[i-1] = ' ';
            printf("%c", s[i-1]);
            s[i] = ch;
            printf("%c", s[i]);
        }
    }
    return 0;
}

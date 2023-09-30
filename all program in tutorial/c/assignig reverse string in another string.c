#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len;
    char s1[100], s2[100];

    gets(s1);

    for(i = 0; ; i++)
    {
        if(s1[i] == '\0') break;
    }
    len = i;

    for(i = len - 1, j = 0; i >= 0; i--, j++)
    {
        s2[j] = s1[i];
    }
    s2[j] = '\0';

    printf("%s\n", s2);

    return 0;
}

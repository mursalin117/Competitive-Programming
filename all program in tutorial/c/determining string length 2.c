#include <stdio.h>

int main()
{
    char s[100];
    int i;

    gets(s);

    for(i = 0; ; i++)
    {
        if(s[i] == '\0') break;
    }

    printf("The length of '%s' is %d\n", s, i);

    return 0;
}

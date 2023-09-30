#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int len;

    gets(s);

    len = strlen(s);

    printf("The length of '%s' is %d.\n", s, len);

    return 0;
}

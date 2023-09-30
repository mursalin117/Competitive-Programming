#include <stdio.h>

int main()
{
    char s[100];
    int i, length = 0;

    gets(s);

    for(i = 0; s[i] != '\0'; i++)
        length++;

    printf("The length of '%s' is %d\n", s, length);

    return 0;
}

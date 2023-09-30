#include <stdio.h>

int main()
{
    int i;
    char s[3][100];

    for(i = 0; i < 3; i++) gets(s[i]);

    for(i = 0; i < 3; i++) printf("%s\n", s[i]);

    return 0;
}

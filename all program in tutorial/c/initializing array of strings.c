#include <stdio.h>

int main()
{
    int i;
    char s[3][100] = { "Subeen", "Wasi", { 'R', 'a', 'f', 'i'} };

    for(i = 0; i < 3; i++) printf("%s\n", s[i]);

    return 0;
}


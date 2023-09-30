#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];

    gets(s1);
    gets(s2);

    strcat(s1, s2); // strcat(where, what) or strcat(destination, source)

    printf("Now s1 is '%s'\n", s1);
    printf("And the length of s1 is %d.\n", strlen(s1));

    return 0;
}

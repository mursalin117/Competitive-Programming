#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    gets(a);

    strcpy(b, a); // strcpy(destination, source)

    printf("Here a is '%s'.\n", a);
    printf("Now b is '%s'.\n", b);

    return 0;
}

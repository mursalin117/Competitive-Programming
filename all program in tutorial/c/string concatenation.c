#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i, j, len;

    gets(a);
    gets(b);

    for(i = 0; ; i++)
    {
        if(a[i] == '\0') break;
    }
    len = i;

    for(i = len, j = 0; b[j] != '\0'; i++, j++)
    {
        a[i] = b[j];
    }
    a[i] = '\0';

    printf("%s\n", a);

    return 0;
}

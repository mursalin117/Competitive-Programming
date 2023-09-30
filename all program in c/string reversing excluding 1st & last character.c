#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char c[200];
    gets(c);
    printf("%c",c[0]);
    for(i=1;i<(strlen(c)-1);i++)
    {
        printf("%c",c[(strlen(c)-1)-i]);
    }
    printf("%c\n",c[strlen(c)-1]);
    return 0;
}

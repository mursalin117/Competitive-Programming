#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char c[100];
    gets(c);
    if(c[0]>=97 && c[0]<=123)
    {
        printf("%c",c[0]-32);
    }
    else if(c[0]>=65 && c[0]<=91)
    {
        printf("%c",c[0]);
    }
    for(i=1;i<strlen(c);i++)
    {
        if(c[i]>=65 && c[i]<=91)
        {
            printf("%c",c[i]+32);
        }
        else
        {
            printf("%c",c[i]);
        }
    }
    printf("\n");
    return 0;
}

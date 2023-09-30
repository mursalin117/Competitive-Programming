#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, len;
    char s[205];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", &s);
        len = strlen(s);
        for(i = 0; i < len/2; i += 2) printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}

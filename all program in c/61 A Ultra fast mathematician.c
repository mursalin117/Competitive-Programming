#include <stdio.h>
#include <string.h>

int main()
{
    int len,i;
    char s1[105],s2[105];
    gets(s1);
    gets(s2);
    len=strlen(s1);
    for(i=0;i<len;i++)
    {
        if(s1[i]==s2[i]) printf("0");
        else printf("1");
    }
    printf("\n");
    return 0;
}

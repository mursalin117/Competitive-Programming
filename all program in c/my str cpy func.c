#include <stdio.h>
#include <string.h>

char my_strcpy(char s1[], char s2[]);

int main()
{
    char st1[100],st2[100];
    gets(st1);
    st2[100]=my_strcpy(st1,st2);
    printf("%s\n",st2);
    return 0;
}

char my_strcpy(char s1[], char s2[])
{
    int len,i;
    len=strlen(s1);
    for(i=0;i<=len;i++)
    {
        s2[i]=s1[i];
    }
    return s2;
}

#include <stdio.h>
#include <string.h>

char my_strcat(char s1[], char s2[]);

int main()
{
    char st1[100],st2[100];
    gets(st1);
    gets(st2);
    st1[100]=my_strcat(st1,st2);
    printf("%s\n",st1);
    return 0;
}

char my_strcat(char s1[], char s2[])
{
    int len1,len2,i,j;

    len1=strlen(s1);
    len2=strlen(s2);

    for(i=len1,j=0; i<=(len1+len2)-1,j<len2; i++,j++)
    {
        s1[i]=s2[j];
    }
    return s1;
}

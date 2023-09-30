#include<stdio.h>

int main()
{
    char s;
    scanf("%c",&s);
    if(s>='a' && s<='z')
    {
        printf("lower case\n");
    }
    else if(s>='A' && s<='Z')
    {
        printf("upper case\n");
    }
    return 0;
}

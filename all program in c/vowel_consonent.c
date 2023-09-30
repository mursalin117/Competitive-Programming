#include<stdio.h>

int main()
{
    char s;
    scanf("%c",&s);
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u')
    {
        printf("vowel\n");
    }
    else if(s=='A' || s=='E' || s=='I' || s=='O' || s=='U')
    {
        printf("vowel\n");
    }
    else
    {
        printf("consonant\n");
    }
    return 0;
}


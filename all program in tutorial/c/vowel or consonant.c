#include <stdio.h>

int main()
{
    char ch;

    ch = getchar();

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') printf("Vowel\n");
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') printf("Vowel\n");
    else printf("Consonant\n");

    return 0;
}

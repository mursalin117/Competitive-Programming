#include <stdio.h>

int main()
{
    char ch, c;

    ch = getchar();

    if(ch >= 'A' &&  ch <= 'Z')
    {
        c = ch + 32;
        printf("The small letter of %ch is %c.\n", ch, c);
    }
    else
    {
        printf("You did not enter a capital letter.\n");
    }
    return 0;
}


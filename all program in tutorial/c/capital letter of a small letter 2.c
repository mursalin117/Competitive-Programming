#include <stdio.h>

int main()
{
    char ch, c;

    ch = getchar();

    if(ch >= 'a' &&  ch <= 'z')
    {
        c = ch - 32;
        printf("The capital letter of %ch is %c.\n", ch, c);
    }
    else
    {
        printf("You did not enter a small letter.\n");
    }
    return 0;
}


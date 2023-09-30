#include <stdio.h>

int main()
{
    char ch;

    ch = getchar();

    if(ch == 'a' || ch == 'A')
    {
        printf("It does not have any previous letter.\n");
        printf("The next letter is %c.\n", ch+1);
    }
    else if(ch == 'z' || ch == 'Z')
    {
        printf("The previous letter of %c is %c.\n", ch, ch-1);
        printf("It does not have any next letter.\n");
    }
    else
    {
        printf("The previous letter of %c is %c.\n", ch, ch-1);
        printf("The next letter of %c is %c.\n", ch, ch+1);
    }
    return 0;
}

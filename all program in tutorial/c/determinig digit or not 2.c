#include <stdio.h>

int main()
{
    char ch;

    ch = getchar();

    if(ch >= '0' && ch <= '9') printf("Digit\n");
    else printf("Not digit\n");

    return 0;
}

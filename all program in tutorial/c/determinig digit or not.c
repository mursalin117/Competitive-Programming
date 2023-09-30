#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9') printf("Digit\n");
    else printf("Not digit\n");

    return 0;
}

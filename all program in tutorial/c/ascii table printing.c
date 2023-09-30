#include <stdio.h>

int main()
{
    int ascii;

    for(ascii = 0; ascii < 256; ascii++)  // ascii value is up to 255
    {
        printf("ASCII value %d is %c\n", ascii, ascii);
    }
    return 0;
}

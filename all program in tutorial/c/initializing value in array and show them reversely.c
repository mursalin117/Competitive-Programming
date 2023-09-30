#include <stdio.h>

int main()
{
    int a[5] = { 1, 3, 6, 9, 11}, i;

    for(i = 4; i >= 0; i--) printf("%d\n", a[i]);

    return 0;
}

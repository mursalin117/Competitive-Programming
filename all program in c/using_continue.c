#include <stdio.h>

int main()
{
    int n = 0;
    while (n < 10)
    {
        //n = n + 1;
        //printf("%d\n", n++);
        n++;
        if (n % 2 == 0)
        {
            continue;
        }
        printf("%d\n", n);
    }
    return 0;
}

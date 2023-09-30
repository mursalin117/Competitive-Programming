#include <stdio.h>

int main()
{
    int n = 2;

    for(; ; )
    {
        if(n <= 100) printf("%d\n",n);
        n += 2;
        if(n > 100) break;
    }
    return 0;
}


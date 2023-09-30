#include <stdio.h>

int main()
{
    long int n,s,i;

    while(scanf("%ld",&n) == 1)
    {
        s = ((n*(n+1))/2)*((n*(n+1))/2);
        printf("%ld\n",s);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    unsigned long long int n;
    scanf("%I64u",&n);
    if(n==0)
    {
        printf("0\n");
    }
    else if(n%2!=0)
    {
        printf("%I64u\n",(n+1)/2);
    }
    else
    {
        printf("%I64u\n",(n+1));
    }
    return 0;
}

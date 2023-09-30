#include <stdio.h>
int main()
{
    int s,h,b,n,k;
    scanf("%d\n",&n);
    s=n/3600;
    b=(n-h)*60;
    s=(n-b)*60;
    printf("%d%d%d",h,b,s);
}

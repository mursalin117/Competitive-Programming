#include <stdio.h>

int main()
{
    int a,b,n,m,s;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    s=((n/m)*b)+((n%m)*a);
    printf("%d\n",s);
    return 0;
}

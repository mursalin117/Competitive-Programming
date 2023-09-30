#include <stdio.h>

int main()
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    s=a-b;
    if(s%10!=9) printf("%d\n",s+1);
    else printf("%d\n",s-1);
    return 0;
}

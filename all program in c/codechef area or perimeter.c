#include <stdio.h>

int main()
{
    int l,b,a,p;
    scanf("%d%d",&l,&b);
    a=l*b;
    p=(l+b)*2;
    if(a>p) printf("Area\n%d\n",a);
    else printf("Peri\n%d\n",p);
    return 0;
}

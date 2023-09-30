#include <stdio.h>

int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(a<b)
    {
        max=b;
    }
    if(b<c)
    {
        max=c;
    }
    printf("large number is =%d\n",max);
    return 0;
}

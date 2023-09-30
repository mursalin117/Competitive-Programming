#include <stdio.h>

int main()
{
    int a,b,c,max,min,s;
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(a<b)
    {
        max=b;
        if(b<c)
        {
            max=c;
        }
    }
    min=a;
    if(a>b)
    {
        min=b;
        if(b>c)
        {
            min=c;
        }
    }
    s=(max+min)/2;
    printf("%d\n",(abs(s-a)+abs(s-b)+abs(s-c)));
    return 0;
}

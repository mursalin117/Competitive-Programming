#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,s;
    scanf("%d%d%d",&a,&b,&c);
    if((a<b && b<c) || (a>b && b>c))
    {
        s=abs(a-b)+abs(b-c);
        printf("%d\n",s);
    }
    else if((b<a && a<c) || (b>a && a>c))
    {
        s=abs(a-b)+abs(a-c);
        printf("%d\n",s);
    }
    else
    {
        s=abs(a-c)+abs(b-c);
        printf("%d\n",s);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
    m=a;
    if(a>=b && c>=b)
    {
        m=b;
    }
    else if(b>=c && a>=c)
    {
        m=c;
    }
    printf("%d\n",m);
    m=a;
    if((a<=b && b<=c) || (c<=b && b<=a))
    {
        m=b;
    }
    if((a<=c && c<=b) || (b<=c && c<=a))
    {
        m=c;
    }
    printf("%d\n",m);
    m=a;
    if(a<=b && c<=b)
    {
        m=b;
    }
    else if(b<=c && a<=c)
    {
        m=c;
    }
    printf("%d\n\n",m);
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}

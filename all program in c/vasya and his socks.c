#include <stdio.h>

int main()
{
    int a,b,m;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        m=a;
        a=b;
        b=m;
    }
    printf("%d %d\n",b,(a-b)/2);
    return 0;
}

#include <stdio.h>

int main()
{
    long int a,n,m;
    float x,y;
    scanf("%ld%ld%ld",&n,&m,&a);
    x=n/a;
    y=m/a;
    if(n%a>0)
    {
        x=x+1;
    }
    if(m%a>0)
    {
        y=y+1;
    }
    printf("%d\n",(int)(x+y));

    return 0;
}

#include <stdio.h>

int main()
{
    int a,b,i,w1=3,w2=2;
    scanf("%d%d",&a,&b);
    for(i=1;;i++)
    {
        a=a*w1;
        b=b*w2;
        if(a>b) break;
        else continue;
    }
    printf("%d\n",i);
    return 0;
}

#include <stdio.h>

int main()
{
    int a,b,c,i,s;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;i<=a;i++)
    {
        s=a-i;
        if(s*2<=b && s*4<=c) break;
        else continue;
    }
    printf("%d\n",(s+s*2+s*4));
    return 0;
}

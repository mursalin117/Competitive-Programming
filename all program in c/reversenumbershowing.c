#include<stdio.h>

int main()
{
    int a,x,count=0;
    scanf("%d",&a);
    while(a>=1)
    {
        x=a%10;
        a=a/10;
        printf("%d",x);
    }

    return 0;
}

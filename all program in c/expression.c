#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a!=1 && b!=1 && c!=1)
    {
        printf("%d\n",a*b*c);
    }
    else if(a==1 && b==1 && c==1)
    {
        printf("%d",(a+b+c));
    }
    else if(a==1 && b==1)
    {
        printf("%d",2*c);
    }
    else if(a==1 && c==1)
    {
        printf("%d",2*b);
    }
    else if(b==1 && c==1)
    {
        printf("%d",2*a);
    }
    else if(a==1)
    {
        if(b<=c)
        {
            printf("%d",(a+b)*c);
        }
        else
        {
            printf("%d",(a+c)*b);
        }
    }
    else if(b==1)
    {
        if(a<=c)
        {
            printf("%d",(a+b)*c);
        }
        else
        {
            printf("%d",(b+c)*a);
        }
    }
    else if(c==1)
    {
        if(b<=a)
        {
            printf("%d",(c+b)*a);
        }
        else
        {
            printf("%d",(a+c)*b);
        }
    }
    return 0;
}

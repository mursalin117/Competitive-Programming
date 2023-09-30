#include<stdio.h>

int main()
{
    int a,x,c;
    scanf("%d",&a);
    if(a==0)
    {
        printf("0");
    }
    else if(a%10==0)
    {
        while(a%10==0)
        {
            a=a/10;
        }
        c=a;
        while(c>=1)
        {
            x=c%10;
            c=c/10;
            printf("%d",x);
        }

    }
    else if(a>0)
    {
        while(a>=1)
        {
            x=a%10;
            a=a/10;
            printf("%d",x);
        }
    }
    return 0;
}


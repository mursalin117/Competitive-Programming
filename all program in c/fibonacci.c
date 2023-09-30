#include<stdio.h>

int main()
{
    int x,y,s,a,i;
    scanf("%d",&a);
    x=0;
    y=1;

    if(a==1)
    {
        printf("%d",x);
    }
    else if(a==2)
    {
        printf("0 %d",y);
    }
    else if(a>=3)
    {
        printf("0 1");
        for(i=1;i<=(a-2);i++)
        {
            s=x+y;
            printf(" %d",s);
            x=y;
            y=s;
        }

    }
    return 0;
}

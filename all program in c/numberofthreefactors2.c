#include <stdio.h>
#include <math.h>

int main()
{
    int x,a;

    printf("Enter a number:");
    scanf("%d",&x);

    if(x==4 || x==-4)
    {
        printf("%d is amazing number.",x);
    }
    else if(x>0 && x%2!=0)
    {
        a=sqrt(x);
        if(x%a==0)
        {
            printf("%d is amazing number.",x);
        }
    }
    else if(x<0 && x%2!=0)
    {
        x=-x;
        a=sqrt(x);
        if(x%a==0)
        {
            printf("%d is amazing number.",-x);
        }
    }
    else
    {
        printf("%d is not amazing number.",x);
    }
    return 0;
}

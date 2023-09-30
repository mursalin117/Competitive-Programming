#include <stdio.h>

int main()
{
    int x,i,a,count=0;

    printf("Enter a number :");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        a=x%i;
        if(a==0)
        {
            count=count+1;
        }
    }
    if(count==3)
    {
        printf("%d is amazing number.",x);
    }
    else
    {
        printf("%d is not amazing number.",x);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int x,i,a,count=0;
    scanf("%d",&x);
    if(x==2)
    {
        printf("1\n");
    }
    else if(x>2)
    {
        for(i=1;i<=(x/2);i++)
        {
            a=x%i;
            if(a==0)
            {
                count=count+1;
            }
        }
        printf("%d",count);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int x,i,count=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(i%2==1)
        {
            count=count+1;
        }
    }
    printf("Count is= %d\n",count);
    return 0;
}

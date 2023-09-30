#include <stdio.h>

int recurtion(int a, int b);

int main()
{
    int i,j,k;
    scanf("%d%d",&i,&j);
    k=recurtion(i,j);
    printf("%d\n",k);
    return 0;
}

int recurtion(int a, int b)
{
    int count=0;
    while(a>=1)
    {
        printf("%d ",a);
        if(a==1)
        {
            count++;
            break;
        }
        else if(a%2==0)
        {
            a=a/2;
            count++;
        }
        else
        {
            a=(a*3)+1;
            count++;
        }
    }
    printf("\n");
    while(b>=1)
    {
        printf("%d ",b);
        if(b==1)
        {
            count++;
            return count;
        }
        else if(b%2==0)
        {
            b=b/2;
            count++;
        }
        else
        {
            b=(b*3)+1;
            count++;
        }
    }
}

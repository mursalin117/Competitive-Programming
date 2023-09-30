#include <stdio.h>

int recurtion(int a, int b);

int main()
{
    int i,j,k;
    scanf("%d%d",&i,&j);
    k=recurtion(i,j);
    printf("%d %d %d\n",i,j,k);
    return 0;
}

int recurtion(int a, int b)
{
    int count=0;
    begin:
    printf("%d ",a);
    if(a==b)
    {
        return count+1;
    }
    else if(a%2==0)
    {
        a=a/2;
        count++;
    }
    else
    {
        a=3*a+1;
        count++;
    }
    goto begin;
}


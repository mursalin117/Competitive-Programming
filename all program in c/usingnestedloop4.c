#include<stdio.h>

int main()
{
    int a,i,j,k;
    char x='*',c=' ';
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=(a-i);k++)
        {
            printf("%c",c);
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%c",x);
        }
        printf("\n");
    }
    return 0;
}




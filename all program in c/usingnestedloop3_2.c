#include<stdio.h>

int main()
{
    int a,i,j,k;
    char x='*',c=' ';
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=(a-i);k>0;k--)
        {
            printf("%c",c);
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",x);
        }
        printf("\n");
    }
    return 0;
}



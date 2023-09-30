#include<stdio.h>

int main()
{
    int a,i,j;
    char x='*';
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",x);
        }
        printf("\n");
    }
    return 0;
}


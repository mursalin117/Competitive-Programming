#include <stdio.h>

int main()
{
    int a,count;
    printf("Enter a number :");
    scanf("%d",&a);
    count=0;
    begin:
        a=a/10;
        count=count+1;
        if(a>=1) goto begin;
        printf("The digit is =%d",count);
    return 0;
}

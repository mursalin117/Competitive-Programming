#include <stdio.h>

int main()
{
    int a,b,count;
    printf("Enter a number :");
    scanf("%d",&a);
    count=0;
    begin:
        b=a/10;
        a=b;
        count=count+1;
        if(b>=1){
                goto begin;
        }
        else{
            printf("The digit is =%d",count);
        }
    return 0;
}

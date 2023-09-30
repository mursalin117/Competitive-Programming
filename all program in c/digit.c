#include <stdio.h>
#include <math.h>

int main()
{
        int a,b,i;
        printf("Enter a number:");
        scanf("%d",&a);
        i=1;
        b=pow(10,i);
        begin:
            if(a/b>=0 && a/b<1){
                printf("The digit is =%d",i);
            }
            else {
                i=i+1;
                goto begin;
            }
        return 0;
}

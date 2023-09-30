#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==0 && x%3==0){
        printf("very favourite\n");
    }
    else if(x%2==0 || x%3==0){
        printf("favourite\n");
    }
    else{
        printf("not favourite\n");
    }
    return 0;
}

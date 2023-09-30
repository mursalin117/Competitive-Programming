#include <stdio.h>

int main()
{
    int i=1,j=7,m=7;
    while(i<10)
    {
        printf("I=%d J=%d\n",i,j--);
        printf("I=%d J=%d\n",i,j--);
        printf("I=%d J=%d\n",i,j--);
        i=i+2;
        m=m+2;
        j=m;
    }
    return 0;
}


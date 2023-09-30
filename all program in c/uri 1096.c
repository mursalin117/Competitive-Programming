#include <stdio.h>

int main()
{
    int i=1,j=7;
    while(i<10)
    {
        printf("I=%d J=%d\n",i,j--);
        printf("I=%d J=%d\n",i,j--);
        printf("I=%d J=%d\n",i,j--);
        i++;
        if(j<5)
        {
            j=7;
        }
    }
    return 0;
}

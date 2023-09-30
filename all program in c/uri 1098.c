#include <stdio.h>

int main()
{
    float i;
    for(i=0.0;i<2.2;i=i+0.2)
    {
        printf("I=%0.1f J=%0.1f\n",i,1+i);
        printf("I=%0.1f J=%0.1f\n",i,2+i);
        printf("I=%0.1f J=%0.1f\n",i,3+i);
    }
    return 0;
}

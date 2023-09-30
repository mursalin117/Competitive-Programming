#include <stdio.h>
#include <math.h>

int main()
{
    int velocity,time,distance;
    scanf("%d%d",&velocity,&time);
    distance = abs(velocity) * time * 2;
    printf("%d\n",distance);
    return 0;
}

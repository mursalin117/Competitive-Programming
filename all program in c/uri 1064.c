#include <stdio.h>

int main()
{
    int i,s=0,count=0;
    float n;
    for(i=0;i<6;i++)
    {
        scanf("%f",&n);
        if(n>0.0)
        {
            s=s+n;
            count++;
        }
    }
    printf("%d valores positivos\n%0.1f\n",count,((float)s/(float)count));
    return 0;
}

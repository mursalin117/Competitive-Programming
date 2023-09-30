#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,m1,m2;
    scanf("%d%d",&a,&b);
    while(a!=-1 && b!=-1)
    {
        m1=abs(a-b);
        m2=abs(99-b)+a+1;
        if(m1>m2)
        {
            printf("%d\n",m2);
        }
        else if(m2>m1)
        {
            printf("%d\n",m1);
        }
        scanf("%d%d",&a,&b);
    }
    return 0;
}

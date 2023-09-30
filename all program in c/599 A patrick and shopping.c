#include <stdio.h>

int main()
{
    long int d1,d2,d3,s[4],m,i;
    scanf("%ld%ld%ld",&d1,&d2,&d3);
    s[0]=(d1+d2)*2;
    s[1]=(d1+d3)*2;
    s[2]=(d2+d3)*2;
    s[3]=d1+d2+d3;
    m=s[0];
    for(i=0;i<4;i++)
    {
        if(m>s[i])
        {
            m=s[i];
        }
    }
    printf("%ld\n",m);
    return 0;
}

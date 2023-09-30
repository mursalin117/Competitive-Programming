#include <stdio.h>

int main()
{
    int a,b,n,count=0,m;
    scanf("%d%d%d",&a,&b,&n);
    while(s>0)
    {
        m=n%a;
        if(m>0)
        {
            n=a;
            a=m;
        }
        else
        {
            n=n;
            a=a;
            break;
        }
    }
}

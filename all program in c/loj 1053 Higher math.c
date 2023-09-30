#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    long int a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if((b*b+c*c==a*a) || (a*a+c*c==b*b) || (a*a+b*b==c*c))
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
    }
    return 0;
}

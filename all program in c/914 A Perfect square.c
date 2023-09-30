#include <stdio.h>
#include <math.h>

int main()
{
    int n,m=0,i,s,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        s=sqrt(a);
        if(m<a && (a%s!=0)) m=a;
    }
    printf("%d\n",m);
    return 0;
}

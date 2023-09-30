#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    double p1,p2,s1,s2;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    p1=(double)a-(((double)a/250.0)*(double)c);
    p2=(double)b-(((double)b/250.0)*(double)d);
    s1=3.0*p1/10.0;
    s2=3.0*p2/10.0;
    if(s1>s2) printf("Misha\n");
    else if(s1<s2) printf("Vasya\n");
    else printf("Tie\n");
    return 0;
}

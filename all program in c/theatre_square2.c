#include <stdio.h>

int main()
{
    long long int a,n,m,s1;
    double x,y,s2;
    scanf("%I64d%I64d%I64d",&n,&m,&a);

    if((n*m)<(a*a))
    {
        s1=(n*m)/(a*a)+1;
        printf("%I64d\n",s1);
    }
    else if((n*m)%(a*a)==0)
    {
        s1=(n*m)/(a*a);
        printf("%I64d\n",s1);
    }
    else if((n*m)%(a*a)!=0)
    {
        s1=(n*m)/(a*a);
        x=(double)(n+m)/(double)(2*a);
        s2=(double)s1+x;
        if((s2-(int)s2)>=0.5)
        {
            s2=s2+1;
        }
        printf("%I64d\n",(long long int)s2);
    }

    return 0;
}


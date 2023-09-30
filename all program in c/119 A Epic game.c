#include <stdio.h>

int gcd(int l, int s);

int main()
{
    int a,b,n,i,s=0;
    scanf("%d%d%d",&a,&b,&n);
    for(i=1;;i++)
    {
        n=n-s;
        if(n>0 && i%2!=0) s=gcd(n,a);
        else if(n>0 && i%2==0) s=gcd(n,b);
        else if(n==0) break;
    }
    if(i%2==0) printf("0\n");
    else printf("1\n");
    return 0;
}

int gcd(int l, int s)
{
    int m;
    if(l>s)
    {
        while(s>0)
        {
            m=s;
            s=l%m;
            l=m;
        }
        return l;
    }
    else
    {
        while(l>0)
        {
            m=l;
            l=s%m;
            s=m;
        }
        return s;
    }
}

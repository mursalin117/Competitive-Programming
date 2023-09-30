#include<stdio.h>

int main()
{
    long int k,n,w,i,s=0,x;
    scanf("%ld%ld%ld",&k,&n,&w);
    if(1<=k && w<=1000 && (0<=n && n<=1000000000))
    {
        for(i=1;i<=w;i++)
        {
            s=s+i*k;
        }
        if(s>=n)
        {
            x=s-n;
            printf("%ld\n",x);
        }
        else if(n>s)
        {
            printf("0\n");
        }
    }
    return 0;
}

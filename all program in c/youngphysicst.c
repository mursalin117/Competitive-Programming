#include<stdio.h>

int main()
{
    int n,a,b,c,s1=0,s2=0,s3=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        s1=s1+a;
        s2=s2+b;
        s3=s3+c;
    }
    if(s1==0 && s2==0 && s3==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

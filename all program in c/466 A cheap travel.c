#include <stdio.h>

int main()
{
    int a,b,m,n,s1,s2,s3,temp;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    s1=((n/m)*b)+((n%m)*a);
    s2=(((n/m)+1)*b);
    s3=n*a;
    temp=s1;
    if(s1>s2 && s2<s3)
    {
        temp=s2;
    }
    else if(s3<s1 && s3<s2)
    {
        temp=s3;
    }
    printf("%d\n",temp);
    return 0;
}

#include <stdio.h>

int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b<=c) || (b+c<=a) || (a+c<=b))
        {
            printf("Case %d: Invalid\n",i);
        }
        else if(a==b && b==c)
        {
            printf("Case %d: Equilateral\n",i);
        }
        else if(a==b || a==c || b==c)
        {
            printf("Case %d: Isosceles\n",i);
        }
        else
        {
            printf("Case %d: Scalene\n",i);
        }
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int prime(int x);
int main()
{
    int n,m;
    scanf("%d",&n);
    m=prime(n);
    if(m==1)
    {
        printf("prime\n");
    }
    else
    {
        printf("not prime\n");
    }
    return 0;

}
int prime(int x)
{
    int i,s;
    if(x==1)
    {
        return 0;
    }
    if(x==2)
    {
        return 1;
    }
    else if(x%2==0)
    {
        return 0;
    }
    else
    {
        s=sqrt(x)+1;
        for(i=3;i<=s;i=i+2)
        {
            if(x%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

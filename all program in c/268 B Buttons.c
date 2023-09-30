#include <stdio.h>

int factorial(int n);

int main()
{
    int a,s;
    scanf("%d",&a);
    if(a>1)
    {
        s=factorial(a);
        printf("%d\n",s+1);
    }
    else printf("1\n");
    return 0;
}

int factorial(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    return s;
}

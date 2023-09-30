#include <stdio.h>
#include <string.h>

int main()
{
    int n,m,count=0,s;
    scanf("%d%d",&n,&m);
    if((n==m) && (n*m)%2==0)
    {
        printf("Malvika\n");
    }
    else if((n==m) && (n*m)%2!=0)
    {
        printf("Akshat\n");
    }
    else if((n<m && n%2!=0) || (n>m && m%2!=0))
    {
        printf("Akshat\n");
    }
    else
    {
        printf("Malvika\n");
    }
    return 0;
}

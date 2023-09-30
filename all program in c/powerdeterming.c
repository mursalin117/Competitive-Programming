#include<stdio.h>

int main()
{
    int a,b,i;
    long long int s=1;

    scanf("%d%d",&a,&b);
    if(a==0 && b==0)
    {
        printf("undefined\n");
    }
    if(a>0 && b==0)
    {
        printf("%d\n",s);
    }
    if(a>=0 && b>0)
    {
        for(i=1;i<=b;i++)
        {
            s=s*a;
        }
        printf("%d\n",s);
    }
    return 0;
}

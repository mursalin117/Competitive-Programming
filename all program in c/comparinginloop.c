#include<stdio.h>

int main()
{
    int i,n;
    long int a,b;

    scanf("%d",&n);
    if(n<=15 && n>0)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%ld%ld",&a,&b);
            if(a<b)
            {
                printf("<\n");
            }
            else if(a>b)
            {
                printf(">\n");
            }
            else if(a==b)
            {
                printf("=\n");
            }
        }
    }
    return 0;
}


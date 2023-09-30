#include <stdio.h>

int main()
{
    int t,i,s;
    long int n,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        count=0;
        while(n>0)
        {
            s=n%2;
            if(s==1)
            {
                count++;
            }
            n=n/2;
        }
        printf("Case %d: %ld\n",i,count);
    }
    return 0;
}

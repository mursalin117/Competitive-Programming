#include <stdio.h>

int main()
{
    int n,i,s,m;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        s=0;
        if(n!=0 && n%3==0)
        {
            while(n%3==0)
            {
                s=s+(n/3);
                n=n/3;
            }
            printf("%d\n",s);
        }
        else if(n!=0 && n%3!=0)
        {
            while(n%3>=1)
            {
                s=s+n/3;
                m=s%3;
                n=(n+m)/3;
                if(n==2)
                {
                    n=n+1;
                }
            }
        }
        else
        {
                return 0;
        }
    }
}

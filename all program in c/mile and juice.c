#include <stdio.h>

int main()
{
    int n,i,t,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a,m,s1=0,s2=0,d;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);

            m=a/30+1;
            s1+=m*10;
            m=a/60+1;
            s2+=m*15;
        }
        if(s1<s2)
        {
                printf("Case %d: Mile %d\n",i,s1);
        }
        else if(s2<s1)
        {
                printf("Case %d: Juice %d\n",i,s2);
        }
        else if(s1==s2)
        {
                printf("Case %d: Mile Juice %d\n",i,s1);
        }

    }
    return 0;
}


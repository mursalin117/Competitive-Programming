#include <stdio.h>

int main()
{
    long int n,k,i,j,count,a=0,k1,m,s1;
    scanf("%ld%ld",&n,&k);
    int p[n],c[n],s[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%ld",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        a=0;
        for(j=0;j<n;j++)
        {
            if(p[i]>p[j] && i!=j)
            {
                s[a]=c[j];
                a++;
                if(a>1)
                {
                    for(k1=0;k1<a;k1++)
                    {
                        if(s[k1]>s[a-1])
                        {
                            m=s[k1];
                            s[k1]=s[a-1];
                            s[a-1]=m;
                        }
                    }
                }
            }
        }
        s1=0;
        count=0;
        for(k1=0;k1<a;k1++)
        {
            s1=s1+s[a-1-k1];
            count++;
            if(count==k) break;
        }
        printf("%d ",c[i]+s1);
    }
    return 0;
}

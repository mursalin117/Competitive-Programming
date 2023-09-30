#include <stdio.h>
#include <math.h>

int main()
{
    long long int n,i,a,s,j,count;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a);
        count=0;
        if(a==4) printf("YES\n");
        else if(a>4 && a%2!=0)
        {
            s=sqrt(a)+1;
            for(j=2;j<=s;j++)
            {
                if(a%j==0)
                {
                    count++;
                    if(count>1)
                    {
                        printf("NO\n");
                        break;
                    }
                }
            }
            if(count==1) printf("YES\n");
            if(count<1) printf("NO\n");
        }
        else printf("NO\n");
    }
    return 0;
}

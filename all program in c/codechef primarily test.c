#include <stdio.h>
#include <math.h>

int main()
{
    int n,root,i,j,count,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        if(n==1) printf("no\n");
        else if(n==2) printf("yes\n");
        else
        {
            count=0;
            root = sqrt(n)+1;
            for(j=2; j<=root; j++)
            {
                if(n%j==0) count++;
                else continue;
            }
            if(count>=1) printf("no\n");
            else printf("yes\n");
        }
    }
    return 0;
}

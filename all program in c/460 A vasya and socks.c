#include <stdio.h>

int main()
{
    int n,m,count,i;
    scanf("%d%d",&n,&m);
    if(n<m) printf("%d\n",n);
    else
    {
        count=n/m;
        for(i=n+1;;i++)
        {
            count--;
            if(i%m==0) count++;
            if(count<=0) break;
        }
        printf("%d\n",i);
    }
    return 0;
}

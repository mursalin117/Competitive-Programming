#include <stdio.h>

int main()
{
    int l,s,n,status=0,i,el,d;
    scanf("%d%d",&l,&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&d,&el);
        if(l>d)
        {
            status=status+1;
        }
        else if(l<d)
        {
            status=0;
        }
        l=l+el;
    }
    if(status>=1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

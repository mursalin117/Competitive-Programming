#include <stdio.h>

int main()
{
    int l,s,m,n;
    scanf("%d%d",&l,&s);
    n=l;
    if(l<s)
    {
        l=s;
        s=n;
    }
    while(s>1)
    {
        m=l%s;
        if(m>0)
        {
            l=s;
            s=m;
        }
        else
        {
            l=l;
            s=s;
            break;
        }
    }
    printf("GCD is = %d\n",s);

    return 0;
}

#include <stdio.h>

int main()
{
    int l,s,m,n;
    scanf("%d%d",&l,&s);
    m=l;
    if(l<s)
    {
        l=s;
        s=m;
    }
    if(l%s==0)
    {
        printf("LCM is = %d\n",l);
    }
    else
    {
        printf("LCM is = %d\n",l*s);
    }
    return 0;
}

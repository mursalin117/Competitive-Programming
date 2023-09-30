#include <stdio.h>
#include <math.h>

int main()
{
    long int l,r,root,i,m;
    scanf("%ld%ld",&l,&r);
    root=sqrt(l)+1;
    int fn[l];
    for(i=2;i<=root;i++)
    {
        fn[i]=0;
        if(l%i==0)
        {
            fn[i]++;
        }
        l++;
        if(l<=r)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    m=0;
    for(i=0;i<l;i++)
    {
        if(fn[i]<=fn[i+1])
        {
            m=i+1;
        }
    }
    printf("%ld\n",m);
    return 0;
}

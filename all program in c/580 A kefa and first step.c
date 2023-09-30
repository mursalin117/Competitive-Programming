#include <stdio.h>

int main()
{
    int n,i,m1=0,m2=0;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        if(a[i-1]<=a[i] && i!=0)
        {
            m1++;
            if(m1>m2)
            {
                m2=m1;
            }
        }
        else
        {
            m1=0;
        }
    }
    printf("%d\n",m2+1);
    return 0;
}

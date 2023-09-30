#include <stdio.h>

int main()
{
    int n,i,s1=0,s2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0) s1=s1+a[i];
        if(a[i-1]>0 && a[i]<0 && i!=0) s2=s2+a[i-1];
    }
    //printf("%d\n",s1);
    //printf("%d\n",s2);
    printf("%d\n",abs(s1+s2));
    return 0;
}

#include <stdio.h>

int main()
{
    int n,i,s1,s2,s3=0;
    scanf("%d",&n);
    int a[n/2];
    for(i=0;i<n/2;i++)
    {
        scanf("%d",&a[i]);
        s3=s3+a[i];
    }
    s1=(n/2)*(n/2);
    s2=(n/2)*((n/2)+1);
    s1=abs(s1-s3);
    s2=abs(s2-s3);
    if(s1>s2) printf("%d\n",s2);
    else printf("%d\n",s1);
    return 0;
}

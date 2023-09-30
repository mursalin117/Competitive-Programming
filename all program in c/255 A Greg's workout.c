#include <stdio.h>

int main()
{
    int n,i,m;
    scanf("%d",&n);
    int a[n],s[3];
    s[0]=0;
    s[1]=0;
    s[2]=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if((i+1)%3==1) s[0]=s[0]+a[i];
        else if((i+1)%3==2) s[1]=s[1]+a[i];
        else s[2]=s[2]+a[i];
    }
    m=s[0];
    for(i=1;i<3;i++)
    {
        if(m<s[i]) m=s[i];
    }
    if(m==s[0]) printf("chest\n");
    else if(m==s[1]) printf("biceps\n");
    else printf("back\n");
    return 0;
}

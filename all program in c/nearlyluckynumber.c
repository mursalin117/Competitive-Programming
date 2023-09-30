#include<stdio.h>

int main()
{
    int i,count=0,s=0;
    long long int x,t;
    scanf("%I64d",&x);
    t=x;
    while(x>1)
    {
        x=x/10;
        count=count+1;
    }
    x=t;
    int a[count];
    for(i=0;i<count;i++)
    {
        a[i]=x%10;
        x=x/10;
        if(a[i]==4 || a[i]==7)
        {
            s=s+1;
        }
    }
    if(s==4 || s==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

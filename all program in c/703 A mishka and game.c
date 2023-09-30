#include <stdio.h>

int main()
{
    int n,i,s1=0,s2=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(a[i]>b[i])
        {
            s1++;
        }
        else if(a[i]<b[i])
        {
            s2++;
        }

    }
    if(s1>s2)
    {
        printf("Mishka\n");
    }
    else if(s1<s2)
    {
        printf("Chris\n");
    }
    else
    {
        printf("Friendship is magic!^^\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n,t,i,m;

    scanf("%d%d",&n,&t);

    int a[n];

    for(i=1; i<n; i++)
        scanf("%d",&a[i]);

    for(i=1; i<n; i++)
    {
        m=i+a[i];
        if(m==t)
        {
            printf("YES\n");
            return 0;
        }
        else i=m-1;
    }
    printf("NO\n");

    return 0;
}

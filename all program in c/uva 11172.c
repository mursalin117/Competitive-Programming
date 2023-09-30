#include <stdio.h>

int main()
{
    long int a,b;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld%ld",&a,&b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }
    return 0;
}

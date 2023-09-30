#include <stdio.h>

int main()
{
    int n,i;
    unsigned long int p,q,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lu%lu%lu",&p,&q,&b);
        if(p%q==0 || q%p==0)
        {
            printf("Finite\n");
        }
        else if(p%2==0 && q%2==0)
    }
    return 0;
}

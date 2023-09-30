#include<stdio.h>

int main()
{
    int x,p,q,i,s=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d%d",&p,&q);
        if((q-p)>=2)
        {
            s=s+1;
        }
    }
    printf("%d\n",s);

    return 0;
}

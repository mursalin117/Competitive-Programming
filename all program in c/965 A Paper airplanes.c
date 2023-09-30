#include <stdio.h>

int main()
{
    int k,n,s,p,num_paper,num_packs;

    scanf("%d%d%d%d",&k,&n,&s,&p);

    num_paper=n/s;
    if(n%s!=0) num_paper=num_paper+1;
    num_packs=(num_paper*k)/p;

    if((num_paper*k)%p!=0) num_packs=num_packs+1;
    printf("%d\n",num_packs);

    return 0;
}

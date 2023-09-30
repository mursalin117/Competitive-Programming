#include <stdio.h>

int main()
{
    int n,m,a,b,i;
    double s,min;
    scanf("%d%d",&n,&m);
    scanf("%d%d",&a,&b);
    s=(double)a/(double)b;
    min=s;
    for(i=1;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        s=(double)a/(double)b;
        if(s<min) min=s;
    }
    printf("%lf\n",min*(double)m);
    return 0;
}

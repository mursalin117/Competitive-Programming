#include <stdio.h>
#include <math.h>

int main()
{
    int Ox,Oy,Ax,Ay,Bx,By,n,i;
    double d1,d2,d3,s,angle;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d%d",&Ox,&Oy,&Ax,&Ay,&Bx,&By);
        d1=sqrt(((Ox-Ax)*(Ox-Ax))+((Oy-Ay)*(Oy-Ay)));
        d2=sqrt(((Ox-Bx)*(Ox-Bx))+((Oy-By)*(Oy-By)));
        d3=sqrt(((Bx-Ax)*(Bx-Ax))+((By-Ay)*(By-Ay)));
        angle=acos(((d1*d1)+(d2*d2)-(d3*d3))/(2*d1*d2));
        s=d1*angle;
        printf("Case %d: %0.10lf\n",i,s);
    }
    return 0;
}

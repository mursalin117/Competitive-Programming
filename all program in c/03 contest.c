#include <stdio.h>

int main()
{
    int i,t,Px,Py,Qx,Qy,Rx,Ry;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&Px,&Py,&Qx,&Qy);
        Rx=Qx-(Px-Qx);
        Ry=Qy-(Py-Qy);
        printf("%d %d\n",Rx,Ry);
    }
    return 0;
}

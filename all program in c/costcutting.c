#include<stdio.h>

int main()
{
    int a,x,y,z,m,i;
    scanf("%d",&a);
    if(a>0 && a<20)
    {
        for(i=1;i<=a;i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            m=x;
            if((x<y && y<z) || (z<y && y<x))
            {
                m=y;
            }
            else if((x<z && z<y) || (y<z && z<x))
            {
                m=z;
            }
            printf("Case %d: %d\n",i,m);
        }
    }

    return 0;
}

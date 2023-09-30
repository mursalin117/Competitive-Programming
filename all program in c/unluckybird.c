#include<stdio.h>

int main()
{
    double v1,v2,v3,a1,a2,t,t1,t2,d1,d2;
    int i,n;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        if(v1<v3 && v2<v3)
        {
            t1=v1/a1;
            t2=v2/a2;
            t=t1;
            if(t1<t2)
            {
                t=t2;
            }
            d1=t*v3;
            d2=((v1*v1)/(2*a1))+((v2*v2)/(2*a2));
        }

        printf("Case %d: %0.10lf %0.10lf\n",i,d2,d1);

    }
    return 0;
}

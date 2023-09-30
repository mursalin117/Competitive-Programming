#include <stdio.h>

int main()
{
    int n,i;
    double avg=0.0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        avg=(double)a[i]+avg;
    }
    printf("%lf\n",avg/n);
    return 0;
}

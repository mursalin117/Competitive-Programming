#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,m,i,j,rt,x=0;
    scanf("%d%d",&a,&b);
    int array[b-a];
    rt=sqrt(b);
    for(i=0;i<(b-a);i++)
    {
        array[i]=0;
    }
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=b;j++)
        {
            if(i==1)
            {
                array[x]=1;
            }
            else if(i==2)
            {
                array[x]=0;
            }
            else if(i%j==0)
            {
                array[x]=1;
            }
        }
        if(array[x]==0)
        {
            printf("%d  ",i);
        }
        x++;
    }
    return 0;
}

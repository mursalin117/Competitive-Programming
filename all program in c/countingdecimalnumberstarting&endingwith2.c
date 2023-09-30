#include<stdio.h>
#include<math.h>

int main()
{
    int n,x=1,a,i=-1,b,count=0,j;

    scanf("%d",&n);

    while(x>0)
    {
        i++;
        a=pow(10,i);
        x=n/a;

    }
    printf("%d\n",i);

    b=pow(10,(i));
    printf("%d\n",b);
    for(j=1;j<=n;j++)
    {
        if(n/b==1 && n%10==1)
        {
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}

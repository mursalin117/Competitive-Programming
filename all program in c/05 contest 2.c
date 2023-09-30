#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverse(int x);

int main()
{
    int i,t,a,b,x,y,s,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        x=inverse(a);
        y=inverse(b);
        s=x+y;
        sum=inverse(s);
        printf("%d\n",sum);
    }
    return 0;
}
int inverse(int x)
{
    int i,a=0,n;
    char num[10];
    for(i=0;;i++)
    {
        if(x%10==0) x=x/10;
        else
        {
            while(x>0)
            {
                num[a]=(char)(x%10);
                a++;
            }
            n=atoi(num);
            break;
        }
    }
    return n;
}

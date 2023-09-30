#include <stdio.h>

int main()
{
    int a,b,c,s[4],t,i;
    scanf("%d%d%d",&a,&b,&c);
    if(a==1 && b==1 && c==1)
    {
        printf("3\n");
    }
    else
    {
        s[0]=(a+b)*c;
        s[1]=a*(b+c);
        s[2]=a*b*c;
        s[3]=a+b+c;
        t=s[0];
        for(i=0;i<=3;i++)
        {
            if(t<=s[i])
            {
                t=s[i];
            }
        }
        printf("%d\n",t);
    }
    return 0;
}

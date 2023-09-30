#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverse(int x);

int main()
{
    int a,s;
    scanf("%d",&a);
    s=inverse(a);
    printf("%d",s);
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

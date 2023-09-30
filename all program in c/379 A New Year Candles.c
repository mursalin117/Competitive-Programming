#include <stdio.h>

int main()
{
    int a,b,count,i;
    scanf("%d%d",&a,&b);
    if(a<b) printf("%d\n",a);
    else
    {
        count=a/b;
        for(i=a+1;;i++)
        {
            count--;
            if(i%b==0) count++;
            if(count<=0) break;
        }
        printf("%d\n",i);
    }
    return 0;
}

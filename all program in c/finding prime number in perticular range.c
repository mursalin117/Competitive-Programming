#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,count,count1=0,i,j,m;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        m=sqrt(i)+1;
        count=0;
        for(j=2;j<=m;j++)
        {
            if(i%j==0)
            {
                //this count is for counting the divider number.
                count=count+1;
            }
        }
        if(count==1)
        {
            /*this count1 is for counting the prime number.it will count the number only if
             the divider number is one(i.e. if count==1).
            */
            count1=count1+1;
        }
    }
    printf("The number of prime number between [%d,%d] is = %d\n",a,b,count1);
    return 0;
}

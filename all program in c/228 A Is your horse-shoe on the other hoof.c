#include <stdio.h>

int main()
{
    long int i,j,count=0;
    long int a[4];
    scanf("%ld%ld%ld%ld",&a[0],&a[1],&a[2],&a[3]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%ld\n",count);
    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
    int x,i;
    scanf("%d",&x);
    if(x>1)
    {
        for(i=2;i<=sqrt(x)+1;i++)
        {
            if(x%i==0)
            {
                printf("NO");
                return 0;
            }
        }
    printf("YES");
    }
    return 0;
}

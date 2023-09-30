#include <stdio.h>

int main()
{
    long int x,i,s=1,c1,c2;
    scanf("%ld",&x);
    for(i=1;;i++)
    {
        s=s*2;
        if(s>x)
        {
            c1=s-x;
            c2=x-(s/2);
            if(c1>c2) printf("%ld\n",c2+1);
            else printf("%ld\n",c1+1);
            return 0;
        }
        else if(s==x)
        {
            printf("1\n");
            return 0;
        }
        else continue;
    }
}

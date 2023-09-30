#include <stdio.h>
#include <math.h>

int main()
{
    long int n,i,j,k,m,d,s=0,x,y;

    scanf("%ld",&n);
    for(i = 0; ; i++)
    {
        x = pow(2,i);
        s = s + (5 * x);

        //printf("%d\n",s);

        if(s >=  n)
        {
            //printf("s = %ld\n",s);
            x = pow(2,i);
            //printf("x = %ld\n",x);
            m = s - (5 * x);
            //printf("m = %ld\n",m);
            d = abs(m - n);
            //printf("d = %ld\n",d);
            //printf("i = %ld\n",i);
            if((d/x) == 0) printf("Sheldon\n");
            else if((d%x == 0) && (d/x == 1))printf("Sheldon\n");
            else if((d/x) == 1) printf("Leonard\n");
            else if((d%x == 0) && (d/x == 2)) printf("Leonard\n");
            else if((d/x) == 2) printf("Penny\n");
            else if((d%x == 0) && (d/x == 3)) printf("Penny\n");
            else if((d/x) == 3) printf("Rajesh\n");
            else if((d%x == 0) && (d/x == 4)) printf("Rajesh\n");
            else if((d/x) == 4) printf("Howard\n");
            else if((d%x == 0) && (d/x == 5))printf("Howard\n");
            return 0;
        }
        else continue;
    }
}

#include <stdio.h>

int main()
{
    int n,i;
    char c1[3]="I ",c2[6]="hate ",c3[3]="it",c4[6]="love ",c5[6]="that ";
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0 && i!=n)
        {
            printf("%s%s%s",c1,c2,c5);
        }
        else if(i%2==0 && i!=n)
        {
            printf("%s%s%s",c1,c4,c5);
        }
        else if(i%2!=0 && i==n)
        {
            printf("%s%s%s\n",c1,c2,c3);
        }
        else if(i%2==0 && i==n)
        {
            printf("%s%s%s\n",c1,c4,c3);
        }
    }
    return 0;
}

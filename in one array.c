#include <stdio.h>
int main()
{
    int a,b,c,j;
    scanf("%d",&a);
    int ar[a];
    for(b=0;b<a;b++)
    {
        scanf("%d",&ar[b]);
    }

        int temp,s;
    for(c=(a-1),j=0;c>=0,j<a;c--,j++)
    {
        temp = ar[c];

        ar[j]= temp;
    ar[j]=ar[c];

    }
    for(s=0;s<a;s++)

        printf("%d  ",ar[j]);


}


#include<stdio.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    int age[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&age[i]);
    }
    for(i=0;i<a;i++)
    {
        printf("roll %d age=%d\n",i+1,age[i]);
    }
    return 0;

}

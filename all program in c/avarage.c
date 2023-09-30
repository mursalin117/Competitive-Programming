#include<stdio.h>

int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    int age[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&age[i]);
        s=s+age[i];
    }
    printf("avg = %f\n",(float)s/(float)a);
    return 0;

}


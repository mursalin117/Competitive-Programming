#include <stdio.h>
//#include <struct.h>

int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    struct student
    {
        char name[30];
        int roll;
        int mark1;
        int mark2;
        int total;
    } std[n];
    printf("Name    Roll    Mark1    Mark2\n");
    for(i=0;i<n;i++)
    {
        gets(std[i].name);
        scanf("%d",&std[i].roll);
        scanf("%d",&std[i].mark1);
        scanf("%d",&std[i].mark2);
        std[i].total=std[i].mark1+std[i].mark2;
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(std[i].total<std[j].total)
            {
                m=std[i].total;
                std[i].total=std[j].total;
                std[j].total=m;
            }
        }
    }
    printf("Name    Roll    Total    Merit\n");
    for(i=0;i<n;i++)
    {
        printf("%s    %d    %d    %d\n",std[i].name,std[i].roll,std[i].total,i+1);
    }
    return 0;
}


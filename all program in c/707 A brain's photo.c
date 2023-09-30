#include <stdio.h>
#include <string.h>

int main()
{
    int n,m,count=0,i,j;
    char ch;
    scanf("%d%d",&m,&n);
    getchar();
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%c",&ch);
            getchar();
            if(ch=='C' || ch=='Y' || ch=='M')
            {
                count++;
            }
        }
    }
    if(count>=1)
    {
        printf("#Color\n");
    }
    else
    {
        printf("#Black&White\n");
    }
    return 0;
}

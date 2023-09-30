#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count=0;
    char c[50];
    scanf("%d",&n);
    getchar();
    gets(c);
    for(i=0;i<n;i++)
    {
        if(c[i]==c[i+1])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

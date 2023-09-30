#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    getchar();
    char name[n][50];
    for(i=0;i<n;i++)
    {
        gets(name[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}

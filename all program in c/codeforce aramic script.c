#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n][1000];
    int len[n];
    for(i=0;i<n;i++)
    {
        gets(str[i]);
        len[i]=strlen(str[i]);
    }
}

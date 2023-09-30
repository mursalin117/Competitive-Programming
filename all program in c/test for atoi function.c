#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,i,len;
    char ch[100];
    gets(ch);
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        n=ch[i]-'0';
        printf("%d\n",n);
    }
    return 0;
}

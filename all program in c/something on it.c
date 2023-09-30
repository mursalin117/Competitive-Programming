#include <stdio.h>
#include <string.h>

int main()
{
    char s[5];
    int i,count=0,len;
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='o')
        {
            count++;
        }
    }
    printf("%d\n",700+(count*100));
    return 0;
}

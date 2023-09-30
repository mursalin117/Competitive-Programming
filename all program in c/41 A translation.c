#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,count=0;
    char s[105],t[105];
    gets(s);
    gets(t);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==t[(len-1)-i])
        {
            count++;
        }
    }
    if(count==len)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

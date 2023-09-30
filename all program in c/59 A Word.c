#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,len,count=0;
    char s[105];
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>='A' && s[i]<='Z') count++;
    }
    if(count>(len/2))
    {
        for(i=0;i<len;i++)
        {
            if(s[i]>='a' && s[i]<='z') printf("%c",s[i]-32);
            else printf("%c",s[i]);
        }
    }
    else
    {
        for(i=0;i<len;i++)
        {
            if(s[i]>='A' && s[i]<='Z') printf("%c",s[i]+32);
            else printf("%c",s[i]);
        }
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,count=0;
    char ch[105];
    gets(ch);
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        if(ch[i]=='/') count++;
        else break;
    }
    if(count==len) printf("/\n");
    else
    {
        for(i=0;i<len;i++)
        {
            if(ch[i]=='/' && ch[i+1]=='/') continue;
            else if(ch[i]=='/' && i==len-1) continue;
            else printf("%c",ch[i]);
        }
    }
    printf("\n");
    return 0;
}

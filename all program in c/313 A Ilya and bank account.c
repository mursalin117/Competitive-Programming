#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char ch[50],m;
    gets(ch);
    len=strlen(ch);
    if(ch[0]=='-')
    {
        if(ch[len-1]>=ch[len-2])
        {
            ch[len-1]='\0';
            if(ch[1]!='0') printf("%s\n",ch);
            else printf("0\n");
        }
        else
        {
            ch[len-2]=ch[len-1];
            ch[len-1]='\0';
            if(ch[1]!='0') printf("%s\n",ch);
            else printf("0\n");
        }
    }
    else printf("%s\n",ch);
    return 0;
}

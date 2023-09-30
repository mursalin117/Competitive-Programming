#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,j,count=0;
    char ch[205];
    gets(ch);
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B')
        {
            i=i+2;
        }
        else if(ch[i]!='W' && ch[i+1]!='U' && ch[i+2]!='B')
        {
            printf("%c",ch[i]);
            if(ch[i+1]=='W' && ch[i+2]=='U' && ch[i+3]=='B') printf(" ");
            else continue;
        }
        else if(ch[i]=='W' && ch[i+1]!='U' && ch[i+2]!='B')
        {
            printf("%c",ch[i]);
            if(ch[i+1]=='W' && ch[i+2]=='U' && ch[i+3]=='B') printf(" ");
            else continue;
        }
        else
        {
            printf("%c",ch[i]);
            if(ch[i+1]=='W' && ch[i+2]=='U' && ch[i+3]=='B') printf(" ");
            else continue;
        }
    }
    printf("\n");
    return 0;
}

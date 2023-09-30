#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100000],s[100000];
    int n,i,len,a;

    gets(ch);
    len = strlen(ch);
    for(i=0; i<len; i++)
    {
        if(i==0 && ch[i]>='a' && ch[i]<='z') printf("%c",ch[i]-32);

        else if(ch[i]>='a' && ch[i]<='z' && (ch[i+1]==' ' || ch[i+1]==',' || ch[i+1]=='.'\
            || ch[i+1]==';' || ch[i+1]==':' || ch[i+1]=='/' || ch[i+1]==')')) printf("%c\n",ch[i]);

        else if(ch[i]==' ' || ch[i]=='.' || ch[i]==',' || ch[i]==';' || ch[i]==':' || ch[i]=='('\
            || ch[i]==')' || ch[i]=='/') continue;

        else if(ch[i]>='a' && ch[i]<='z' && (ch[i-1]==' ' || ch[i-1]==',' || ch[i-1]=='.'\
            || ch[i-1]==';' || ch[i-1]==':' || ch[i-1]=='/' || ch[i-1]==')')) printf("%c",ch[i]-32);

        else printf("%c",ch[i]);
    }

    return 0;
}


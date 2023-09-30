#include <stdio.h>
#include <string.h>

int main()
{
    int len,count=0,i,n;
    char ch[100];
    gets(ch);
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') count++;
        }
        else
        {
            n=ch[i]-'0';
            if(n%2!=0) count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

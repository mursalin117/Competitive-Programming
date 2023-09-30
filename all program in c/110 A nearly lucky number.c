#include <stdio.h>
#include <string.h>

int main()
{
    //unsigned long long int n;
    int len,i,count=0;
    char c[25];
    gets(c);
    len=strlen(c);
    //n=atoi(c);
    for(i=0;i<len;i++)
    {
        if(c[i]=='4' || c[i]=='7')
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    /*else if(count==len)
    {
        printf("YES\n");
    }*/
    else
    {
        printf("NO\n");
    }
    return 0;
}

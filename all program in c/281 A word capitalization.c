#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int len,i;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(i==0)
        {
            if(str[i]>=97 && str[i]<=123)
            {
                str[i]=str[i]-32;
            }
            else
            {
                str[i]=str[i];
            }
        }
        printf("%c",str[i]);

    }
    return 0;
}

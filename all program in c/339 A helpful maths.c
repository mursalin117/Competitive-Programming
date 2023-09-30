#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],m;
    int len,s,i,j;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]>str[j] && str[i]!='+' && str[j]!='+')
            {
                m=str[i];
                str[i]=str[j];
                str[j]=m;
            }
        }
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}

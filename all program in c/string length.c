#include <stdio.h>
#include <string.h>

int strleng(char str2[100]);

int main()
{
    int length;
    char str[100];
    gets(str);
    printf("%d\n",strlen(str));
    length=strleng(str);
    printf("%d\n",length);
    return 0;
}
int strleng(char str2[100])
{
    int count=0,i;
    for(i=0;;i++)
    {
        if(str2[i]!='\0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

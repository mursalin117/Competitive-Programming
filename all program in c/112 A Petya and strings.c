#include <stdio.h>
#include <string.h>

int main()
{
    int len,sum1=0,sum2=0,i,count1=0,count2=0;
    char s1[101],s2[101];
    gets(s1);
    gets(s2);
    len=strlen(s1);
    for(i=0;i<len;i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i]=s2[i]+32;
        }
    }
    for(i=0;i<len;i++)
    {
        if(s1[i]==s2[i])
        {
            continue;
        }
        else if(s1[i]>s2[i])
        {
            printf("1\n");
            return 0;
        }
        else
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}

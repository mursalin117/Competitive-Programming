#include <stdio.h>
#include <string.h>

int main()
{
    int i,len,count=0;
    char ch[105];
    gets(ch);
    len=strlen(ch);
    if(ch[0]>='A' && ch[0]<='Z')
    {
        for(i=1;i<len;i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
            {
                count++;
                if(count>=1)
                {
                    printf("%s\n",ch);
                    return 0;
                }
            }
            else count++;
        }
        if(count==len-1)
        {
            for(i=0;i<len;i++)
            {
                printf("%c",ch[i]+32);
            }
        }
    }
    else
    {
        for(i=1;i<len;i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
            {
                count++;
                if(count>=1)
                {
                    printf("%s\n",ch);
                    return 0;
                }
            }
            else count++;
        }
        if(count==len-1)
        {
            printf("%c",ch[0]-32);
            for(i=1;i<len;i++)
            {
                printf("%c",ch[i]+32);
            }
        }
    }
    printf("\n");
    return 0;
}

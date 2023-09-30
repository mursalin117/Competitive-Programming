#include <stdio.h>
#include <string.h>

int main()
{
    int len,count=0,i;
    char num[100];
    gets(num);
    len=strlen(num);
    for(i=0;i<len;i++)
    {
        if(num[i]==num[i+1])
        {
            count++;
            if(count+1>=7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
        {
            count=0;
        }
    }
    printf("NO\n");
    return 0;
}

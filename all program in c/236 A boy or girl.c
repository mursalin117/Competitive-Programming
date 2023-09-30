#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int len,count=0,i,j;
    gets(a);
    len=strlen(a);
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]==a[j] && a[i]!='\0' && a[j]!='\0')
               {
                    count++;
                    a[j]='\0';
               }
        }
    }
    if((len-count)%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}

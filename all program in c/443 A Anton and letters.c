#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,j,count1=0,count2=0;
    char ch[1050];
    gets(ch);
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        if(ch[i]!=' ' && ch[i]!=',' && ch[i]!='{' && ch[i]!='}') count1++;
        for(j=i+1;j<len;j++)
        {
            if(ch[i]==ch[j] && ch[j]!=' ' && ch[j]!=',' && ch[j]!='{' && ch[j]!='}')
            {
                count2++;
                break;
            }
        }
    }
    printf("%d\n",count1-count2);
    return 0;
}

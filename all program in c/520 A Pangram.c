#include <stdio.h>
#include <string.h>

int main()
{
    int n,len,i,j,count1=0,count2=0;
    scanf("%d",&n);
    getchar();
    char ch[105];
    gets(ch);
    len=strlen(ch);
    if(len<26) printf("NO\n");
    else
    {
        for(i=0;i<len;i++)
        {
            count1++;
            for(j=i+1;j<len;j++)
            {
                if(ch[i]==ch[j] || ch[i]==(ch[j]-32) || ch[i]==(ch[j]+32))
                {
                    count2++;
                    break;
                }
            }
        }
        if((count1-count2)==26) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,len1,len2,count=0;
    char str1[105],str2[105],str3[150],str4[150];
    gets(str1);
    gets(str2);
    gets(str4);
    strcpy(str3,str1);
    strcat(str3,str2);
    len1=strlen(str3);
    len2=strlen(str4);
    if(len1==len2)
    {
        for(i=0;i<len2;i++)
        {
            for(j=0;j<len1;j++)
            {
                if(str4[i]==str3[j])
                {
                    str3[j]='\0';
                    count++;
                    break;
                }
            }
        }
        if(count==len2) printf("YES\n");
        else printf("NO\n");
    }
    else printf("NO\n");
    return 0;
}

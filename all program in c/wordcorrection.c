#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y'))
        {
            s[i+1]=s[i];
            continue;
        }
        else
        {
            printf("%c",s[i]);
        }

    }
    printf("\n");
    return 0;
}

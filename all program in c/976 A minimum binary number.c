#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,len,j;
    scanf("%d",&n);
    char s[n+1],m;
    getchar();
    gets(s);
    for(i=0;i<n;i++)
    {
        if(i==0 && s[i]=='1')
        {
            printf("1");
        }
        else if(i>0 && s[i]=='0')
        {
            printf("0");
        }
        else if(n==1 && s[i]=='0')
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}

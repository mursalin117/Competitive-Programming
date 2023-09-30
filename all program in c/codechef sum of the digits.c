#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,len,i,j,sum,t;
    char ch[30];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(ch);
        len = strlen(ch);
        sum=0;
        for(j=0; j<len; j++)
        {
            t=ch[j]-'0';
            sum=sum+t;
        }
        printf("%d\n",sum);
    }
    return 0;
}

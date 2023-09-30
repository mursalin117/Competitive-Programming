#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    getchar();
    char ch[n+5];
    gets(ch);
    for(i=0;i<n;i++)
    {
        if((ch[i]=='U' && ch[i+1]=='R') || (ch[i]=='R' && ch[i+1]=='U'))
        {
            count++;
            i=i+1;
        }
    }
    printf("%d\n",n-count);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int n,status=0,i;
    scanf("%d",&n);
    char ch[n];
    gets(ch);
    for(i=0;i<n;i++)
    {
        //scanf("%c",&c[i]);
        if(ch[i]>='A' && ch[i]<='Z')
        {
            status=status+1;
        }
        else
        {
            status=0;
        }
    }
    if(status>=1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

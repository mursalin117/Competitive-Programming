#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    getchar();
    char str[n+5];
    gets(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='A') count1++;
        else count2++;
    }
    if(count1==count2) printf("Friendship\n");
    else if(count1>count2) printf("Anton\n");
    else printf("Danik\n");
    return 0;
}

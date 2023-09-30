#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count_1=0,count_0=0;
    scanf("%d",&n);
    getchar();
    char ch[n+1];
    gets(ch);
    if(n>=3)
    {
        for(i=0;i<n;i++)
        {
            if(ch[i]=='1' && ch[i+1]=='1')
            {
                count_1++;
                i=i+1;
            }
            else if(ch[i]=='0' && ch[i+1]=='0' && ch[i+2]=='0')
            {
                count_0++;
                i=i+2;
            }
            else if(i==(n-1) && ch[i]=='0' && ch[i-1]=='0') count_0++;
            else if(i==0 && ch[i]=='0' && ch[i+1]=='0') count_0++;
            else continue;
        }
        if(count_1>=1 || count_0>=1) printf("No\n");
        else printf("Yes\n");
        return 0;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(ch[i]=='1') count_1++;
            else if(ch[i]=='0') count_0++;
        }
        if(n==1 && count_1==1) printf("Yes\n");
        else if(n==2 && count_1==1 && count_0==1) printf("Yes\n");
        else printf("No\n");
        return 0;
    }
}

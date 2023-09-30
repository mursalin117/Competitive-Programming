#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    getchar();
    char s[n+1];
    gets(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            count++;
        }
    }
    printf("%d\n",abs(n-(2*count)));
    return 0;
}

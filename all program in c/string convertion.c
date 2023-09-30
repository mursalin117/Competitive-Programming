#include <stdio.h>
#include <string.h>

int main()
{
    char a[30],b[30],m;
    int len,i;
    gets(a);
    gets(b);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='A' && a[i-1]!='B' && i!=0)
        {
            m=a[i-1];
            a[i-1]=a[i];
            a[i]=m;
            if(!(strcmp(a,b)))
            {
                printf("YES\n");
                return 0;
            }
        }
        else if(a[i]=='B' && a[i+1]!='A' && i!=len-1)
        {
            m=a[i+1];
            a[i+1]=a[i];
            a[i]=m;
            if(!(strcmp(a,b)))
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    long long int s=1,count=0;
    char a[10],b[105];
    gets(a);
    gets(b);
    while(s<atoi(b))
    {
        s=s*atoi(a);
        count++;
    }
    printf("%I64d",count);
    return 0;
}

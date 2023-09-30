#include <stdio.h>

int main()
{
    int i;
    char a[32];
    gets(a);
    for(i=0;i<32;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}

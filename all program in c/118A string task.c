#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    int i,x=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!='a' && a[i]!='A' && a[i]!='e' && a[i]!='E' && a[i]!='i' && a[i]!='I' && a[i]!='o' && a[i]!='O' && a[i]!='u' && a[i]!='U' && a[i]!='y' && a[i]!='Y')
        {
            b[x]=a[i];

            if(b[x]>='A' && b[x]<='Z')
            {
                b[x]=b[x]+32;
            }
            x++;
        }
    }
    for(i=0;i<x;i++)
    {
        printf(".");
        printf("%c",b[i]);
    }
    printf("\n");
    return 0;
}

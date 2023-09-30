#include <stdio.h>
#include <string.h>

int main()
{
    int i,a=0;
    char c[100],c1[100];
    gets(c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]!='a' || c[i]!='A' || c[i]!='e' || c[i]!='E' || c[i]!='i' || c[i]!='I' || c[i]!='o' || c[i]!='O' || c[i]!='u' || c[i]!='U')
        {
            c1[a]=c[i];
            a++;
        }
    }
    for(i=0;i<strlen(c1);i++)
    {
        if(c)
    }
}

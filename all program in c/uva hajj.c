#include <stdio.h>
#include <string.h>

int main()
{
    int i=1;
    char s1[20]="Hajj-e-Akbar",s2[20]="Hajj-e-Asghar",s3[10]="Hajj",s4[10]="Umrah",s5[2]="*",s6[10];
    gets(s6);
    while(s6[0]!='*')
    {
        if(!strcmp(s6,s3)) printf("Case %d: %s\n",i,s1);
        else printf("Case %d: %s\n",i,s2);
        i++;
        gets(s6);
    }
    return 0;
}

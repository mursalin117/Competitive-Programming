#include <stdio.h>
#include <string.h>

int main()
{
    int i,len,coun = 0,com = 0;
    char s[200];

    gets(s);

    len = strlen(s);

    for(i = 0; i < len; i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            coun++;
            printf("%d\n",coun);
            if(com < coun)
            {
                com = coun;
                coun = 0;
            }
           printf("%c\t%d\n", s[i], i);
        }
        else
        {
            coun++;
            //printf("%d\n", coun);
        }

       printf("%d\n",coun);
    }
    if(com < coun) com = coun;

    printf("%d\n", com);

    return 0;
}


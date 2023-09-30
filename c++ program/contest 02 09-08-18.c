#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[250000],b[250000],c[250000];
    int i,j,coun = 0,len;

    gets(a);
    gets(b);

    strcat(c,b);
    if((strcmp(a,b)) == 0) printf("Yes\n");
    else
    {
        len = strlen(a);
        for(i = 0; i < len; i++)
        {
            for(j = 0; j < len; j++)
            {
                if(a[i] == b[j])
                {
                    b[j] = '0';
                    coun++;
                    break;
                }
            }
        }
        if(coun != len) printf("No\n");
        else
        {
            strcat(b,c);
            begin:
            for(i = 0; i < len; i++)
            {
                if(i != (len-1))
                {
                    c[0] = a[i+1];
                    a[i+1] = a[i];
                    a[i] = c[0];
                }
            }
            if((strcmp(a,b)) == 0) printf("Yes\n");
            else goto begin;
        }
    }
    return 0;
}



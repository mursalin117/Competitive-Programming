#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,count=0,k;
    char c1[200],c2[25];

    gets(c1);
    gets(c2);

    for(i=0;i<strlen(c1);i++)
    {
        if(c2[0]==c1[i])
        {
            break;
        }

    }
    for(j=0,k=i;j<strlen(c2),k<(i+strlen);j++,k++)
        {
            if(c2[j]==c1[k])
            {
                count=count+1;
            }
        }
    if(count>=strlen(c2))
    {
        printf("Yes.\n");
    }
    else
    {
        printf("No.\n");
    }
    return 0;
}

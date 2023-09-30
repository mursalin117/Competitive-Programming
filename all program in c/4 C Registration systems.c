#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,x,a = 0;
    char ch[100];

    scanf("%d",&n);
    getchar();

    struct registration
    {
        char s[45];
        int count;
    }r_s[n];

    for(i = 0; i < n; i++)
    {
        r_s[i].count = 0;
        if(i == 0)
        {
            gets(r_s[i].s);
            r_s[i].count++;
            printf("OK\n");
        }
        else
        {
            gets(r_s[i].s);
            for(j = 0; j < i; j++)
            {
                if(!strcmp(r_s[j].s,r_s[i].s))
                {
                    r_s[j].count++;
                    r_s[i].count++;
                    x = r_s[j].count-1;
                    printf("%s%d\n",r_s[j].s,x);
                    break;
                }
            }
            if(r_s[i].count == 0)
            {
                printf("OK\n");
                r_s[i].count++;
            }
        }
    }
    return 0;
}

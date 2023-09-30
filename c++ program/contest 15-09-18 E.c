#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, j, a;
    char s[100], d[10][20], com[15];

    scanf("%s", s);

    for(i = 0; i < 10; i++)
    {
        scanf("%s", d[i]);
        //cout << d[i] << endl;
    }
    a = 0;
    for(i = 0; i < 80; i++)
    {
        com[a] = s[i];
        //cout << com[a] << endl;
        a++;
        if(a == 10)
        {
            com[a] = '\0';
           // printf("%s\n", com);
            //cout << com << endl;
            for(j = 0; j < 10; j++)
            {
                if(!strcmp(com, d[j]))  printf("%d", j);//cout << i+1;
                else continue;
            }
            a = 0;
        }
    }
    return 0;
}


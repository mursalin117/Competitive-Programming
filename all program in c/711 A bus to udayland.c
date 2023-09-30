#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,count=0;

    scanf("%d",&n);
    getchar();

    char ch[n][10];

    for(i = 0; i < n; i++)
    {
        gets(ch[i]);
        if(count == 0)
        {
            for(j = 0; j < 5; j++ )
            {
                if(ch[i][j]=='O' && ch[i][j+1]=='O' && (j ==0 || j==3))
                {
                    count++;
                    ch[i][j] = '+';
                    ch[i][j+1]='+';
                    break;
                }
            }
        }
    }
    if(count >= 1)
    {
        printf("YES\n");
        for(i = 0; i < n; i++)
            printf("%s\n",ch[i]);
    }
    else printf("NO\n");

    return 0;
}

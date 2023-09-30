#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,len,t;
    scanf("%d%d",&n,&t);
    getchar();
    char q[n+1];
    gets(q);
    for(j=1;j<=t;j++)
    {
        for(i=0;i<n;i++)
        {
            if(q[i]=='B' && q[i+1]=='G' && i!=(n-1))
            {
                q[i]='G';
                q[i+1]='B';
                i++;
            }
        }
    }
    printf("%s\n",q);
    return 0;
}

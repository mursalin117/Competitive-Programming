#include<stdio.h>
#include<string.h>

int main()
{
    char p[100];
    int i,s=0;
    int size;

    scanf("%s",&p);
    size = strlen(p);

    for(i=0;i<size;i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            s=s+1;
            break;
        }
    }
    if(s>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

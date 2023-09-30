#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t,i,j,len1,len2,x,y,s;
    char a[15],b[15],m;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        scanf("%s%s",a,b);
        len1=strlen(a);
        len2=strlen(b);
        for(j=0;j<(len1/2);j++)
        {
            m=a[j];
            a[j]=a[len1-1-j];
            a[len1-1-j]=m;
        }
        for(j=0;j<(len2/2);j++)
        {
            m=b[j];
            b[j]=b[len2-1-j];
            b[len2-1-j]=m;
        }
        x=atoi(a);
        y=atoi(b);
        s=x+y;
        for(i=1;;i++)
        {
            if(s%10==0) s=s/10;
            else
            {
                    while(s>0)
                    {
                        printf("%d",s%10);
                        s=s/10;
                    }
                    printf("\n");
                    break;
            }
        }
    }
    return 0;
}

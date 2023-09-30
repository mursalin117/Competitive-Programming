#include <stdio.h>
#include <string.h>

int main()
{
    char a[105];
    int len,count=0,i,j,k,l,m;
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='h')
        {
            for(j=i+1;j<len;j++)
            {
                if(a[j]=='e')
                {
                    for(k=j+1;k<len;k++)
                    {
                        if(a[k]=='l')
                        {
                            for(l=k+1;l<len;l++)
                            {
                                if(a[l]=='l')
                                {
                                    for(m=l+1;m<len;m++)
                                    {
                                        if(a[m]=='o')
                                        {
                                            printf("YES\n");
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}

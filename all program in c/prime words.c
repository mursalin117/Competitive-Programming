#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int len,i,s,count,root;
    char ch[10000],*p;
    p=gets(ch);
    while(p)
    {
        s=0;
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            if(ch[i]>='a' && ch[i]<='z') s=s+ch[i]-96;
            else if(ch[i]>='A' && ch[i]<='Z') s=s+ch[i]-64+26;
        }
        count=0;
        if(s==1) printf("It is not a prime word.\n");
        else if(s==2) printf("It is a prime word.\n");
        else if(s%2==0) printf("It is not a prime word.\n");
        else
        {
            root=sqrt(s)+1;
            for(i=3;i<=root;i=i+2)
            {
                if(s%i==0) count++;
                if(count>=1)
                {
                    printf("It is not a prime word.\n");
                    break;
                }
            }
            if(count==0) printf("It is a prime word.\n");
        }
        p=gets(ch);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,s=0,m1,m2;
    scanf("%d",&n);
    getchar();
    char present_condition[n+1],unlock_state[n+1];
    gets(present_condition);
    gets(unlock_state);
    for(i=0;i<n;i++)
    {
        m1=abs(present_condition[i]-unlock_state[i]);
        m2=abs(10-m1);
        if(m1<m2)
        {
            s=s+m1;
        }
        else
        {
            s=s+m2;
        }
    }
    printf("%d%c",s,10);
    return 0;
}

#include <stdio.h>

int main()
{
    int n,s,i,j,m;

    scanf("%d%d",&s,&n);

    int powDr[n],extraPow[n];

    for(i=0; i<n; i++)
    {
        scanf("%d%d",&powDr[i],&extraPow[i]);
        if(i>0)
        {
            for(j=0; j<i; j++)
            {
                if(powDr[j] > powDr[i])
                {
                    m = powDr[j];
                    powDr[j] = powDr[i];
                    powDr[i] = m;

                    m = extraPow[j];
                    extraPow[j] = extraPow[i];
                    extraPow[i] = m;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(s > powDr[i]) s = s + extraPow[i];
        else
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}

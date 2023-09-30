#include<stdio.h>

int main()
{
    int x,count=0,t,i,j,count1=0,k;
    scanf("%d",&x);
    t=x;
    while(x>0)
    {
            x=x/2;
            count=count+1;
    }
    int a[count],b[count];
    x=t;
    for(i=0;i<count;i++)
    {
        a[i]=x%2;
        printf("%d",a[i]);
        x=x/2;
    }
    printf("\n");
    for(j=0;j<count;j++)
    {
        b[j]=a[(count-1)-j];
        printf("%d",b[j]);
    }
    printf("\n");
    for(k=0;k<count;k++)
    {
        if(a[k]==b[k])
        {
            count1=count1+1;
        }
    }
    if(count==count1)
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not palindrome.\n");
    }
    return 0;

}

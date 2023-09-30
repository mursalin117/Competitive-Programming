#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    if(x==47 || x==74 || x==447 || x==474 || x==744 || x==747 || x==477)
    {
        printf("YES\n");
    }
    else if(x%4==0 || x%7==0)
    {
        printf("Yes\n");
    }
    else if(x%47==0 || x%74==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n,i,max=0,min=200,max_num,min_num;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
            max_num=i;
        }
        if(min>=a[i])
        {
            min=a[i];
            min_num=i;
        }
    }
    if(max_num<min_num) printf("%d\n",abs(0-max_num)+abs(n-1-min_num));
    else printf("%d\n",abs(0-max_num)+abs(n-1-min_num)-1);
    return 0;
}

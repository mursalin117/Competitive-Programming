#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float f;
    scanf("%d%f",&n,&f);
    if(n%5==0 && ((float)n+0.50<=f)) printf("%0.2f\n",f-0.50-(float)n);
    else printf("%0.2f\n",f);
    return 0;
}

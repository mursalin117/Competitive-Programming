#include <stdio.h>

int main()
{
    int n,count1=0,count2=0,count3=0,count4=0,s,d,com,i,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==4) count4++;
        else if(a[i]==3) count3++;
        else if(a[i]==2) count2++;
        else count1++;
    }
    if(count2%2==0) d=count2/2;
    else d=(count2/2)+1;
    s=count4+count3+d;
    com=count1*1+count2*2+count3*3+count4*4;
    if((s*4)>=com) printf("%d\n",s);
    else
    {
        y=com-(s*4);
        if(y%4==0) x=y/4;
        else x=(y/4)+1;
        s=s+x;
        printf("%d\n",s);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int i,n,t,count_1=0,count_2=0,count_3=0,count_4=0,num_c_1,num_c_2,total_num_c_1,total_num,\
    difference;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n==4) count_4++;
        else if(n==3) count_3++;
        else if(n==2) count_2++;
        else count_1++;
    }

    if(count_2%2==0) num_c_1 = count_4 + count_3 +count_2/2;
    else num_c_1 = count_4 + count_3 + count_2/2 + 1;

    total_num = count_4*4 + count_3*3 + count_2*2 + count_1;
    total_num_c_1 = 4*num_c_1;

    if(total_num_c_1 >= total_num) printf("%d\n",num_c_1);
    else
    {
        difference = total_num - total_num_c_1;

        if(difference%4==0) num_c_2 = num_c_1 + difference/4;
        else num_c_2 = num_c_1 + difference/4 + 1;

        printf("%d\n",num_c_2);
    }
    return 0;
}

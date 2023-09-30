/* This problem can be solved by both series or using loop. Here the series wise solution is given.
If we analyze the problem we can find a series like
        1   3   4   6   7   9   10  12  13  15  16  18..........
for   1   2   3   4   5   6   7    8    9  10  11   12  13........
So, we can see for the odd number the series is increasing by 3 for every odd number starting from 1.
Then if we give any number as input at first we have to find out if it is odd or even. If it is a odd then
find the difference from 1             d=((n-1)/2)*3+1
by doing this we can find the required number for any input odd number
Again if we analyze the series again then we can see that for every even number the required number is increased by 2
from the previous odd number's required number.
Then for every even number we have to just calculate the previous odd's required number and then add 2 with it
like                      d=((n-1-1)/2)*3+1             then         t=d+2;
*/

#include <stdio.h>

int main()
{
    int n,d,t;
    while(scanf("%d",&n) == 1)
    {
        if(n%2 == 0)
        {
            n = n-1;
            d = ((n-1)/2)*3+1;
            t = d+2;
            printf("%d\n",t);
        }
        else
        {
            d=((n-1)/2)*3+1;
            printf("%d\n",d);
        }
    }
    return 0;
}

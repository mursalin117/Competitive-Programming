#include <stdio.h>

int main()
{
    int i, start, end, dif, sum;

    printf("Enter the starting, ending numbers and the difference :\n");
    scanf("%d%d%d", &start, &end, &dif);

    for (i = start, sum = 0; i <= end; i += dif)
    {
        sum += i;
    }
    printf("The sum is %d\n", sum);

    return 0;
}

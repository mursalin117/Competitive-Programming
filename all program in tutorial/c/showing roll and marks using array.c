#include <stdio.h>

int main()
{
    int roll;
    double marks[5] = { 90.25, 89, 98, 100, 84.5};

    for(roll = 1; roll <= 5; roll++)
    {
        printf("Roll :%d \tMark :%lf\n", roll, marks[roll - 1]);
    }
    return 0;
}

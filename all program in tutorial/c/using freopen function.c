#include <stdio.h>

int main()
{
    freopen("d:\\all program in video lecture\\input2.txt", "rt", stdin);
    freopen("d:\\all program in video lecture\\output2.txt", "wt", stdout);

    int a, b, sum;

    while(scanf("%d%d", &a, &b) == 2)
    {
        sum = a + b;
        printf("%d\n", sum);
    }
    return 0;
}

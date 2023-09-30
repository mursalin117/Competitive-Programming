#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a, b, c, d, sum1, sum2;

    scanf("%ld%ld%ld%ld", &a, &b, &c, &d);

    sum1 = 2 * a + c;
    sum2 = c + d * 2;

    if(sum1 == sum2) printf("1\n");
    else printf("0\n");

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int recursion(int x);

int main()
{
    int n, sum;

    scanf("%d", &n);

    sum = recursion(n);

    printf("%d\n", sum);

    return 0;
}

int recursion(int x)
{
    if(x == 1) return 1;

    return (x + recursion(x-1));
}

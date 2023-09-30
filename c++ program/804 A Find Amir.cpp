/* here we have to consider the smallest amount of cost.
     the cost is then 0. so the total cost of 0 must be count.
     as we know that cost will be count like (i + j) % (n + 1).
     and the pairs will be (1, n), (2, n-1), (3, n-2)........(n/2, (n/2) + 1),
     then the we have see the n whether it is odd or even.
     if odd the ans is = (n / 2) - 1; as he is on the 1st position, so the total amount will be
     1 less than n/2;
     otherwise, the ans will be = (n /2),
     */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    if(n % 2 == 0) printf("%d", (n/2)-1);
    else printf("%d\n", n/2);

    return 0;
}

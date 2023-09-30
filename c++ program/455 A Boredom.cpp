/* the problem states that at first we can take any several steps where we can choose
    any number and the next number and the previous number of the chosen number will
    be deleted and the process will continue till there will be no match of choosing a number
    of which the previous and the next number is not in the array.
    The process calculation is
    at first we have count the number how many of them has been apear in the array.
    then we have to compare for each number in the array what the answer appears.
    at last the maximum number will be the answer.

    ans[0] = 0;
    ans[1] = a[1];
    ans[i] = max(ans[i-1], ans[i-2] + a[i] * i); where 2 <= i <= n
    */

#include <iostream>
#include <bits/stdc++.h>

typedef long long int ll;
ll a[100005], ans[100005];

using namespace std;

int main()
{
    ll i, j, n, x;

    scanf("%I64d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%I64d", &x);
        a[x]++;
    }
    for(i = 0; i < 100001; i++)
    {
        if(i == 0) ans[i] = 0;
        else if(i == 1) ans[i] = a[i];
        else
        {
            ans[i] = max(ans[i-1], ans[i-2] + (a[i] * i));
        }
    }
    printf("%I64d\n", ans[100000]);

    return 0;
}

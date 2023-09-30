#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n))
    {
        if(n == 0) break;
        queue <int> Q;
        for(int i = 1; i <= n; i++) Q.push(i);
        printf("Discarded cards:");
        while(Q.size() > 1)
        {
                int u = Q.front();
                if(Q.size() == 2) printf(" %d", u);
                else printf(" %d,", u);
                Q.pop();
                u = Q.front();
                Q.pop();
                Q.push(u);
        }
        printf("\n");
        int u = Q.front();
        printf("Remaining card: %d\n", u);
    }
    return 0;
}

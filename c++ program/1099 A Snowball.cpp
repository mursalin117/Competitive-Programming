#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w, h, u1, d1, u2, d2, i, th;
    scanf("%d%d%d%d%d%d", &w, &h, &u1, &d1,&u2, &d2);
    th = w;
    for(i = h; i >= 0; i--)
    {
        th += i;
        if(i == d1) th -= u1;
        else if(i == d2) th-= u2;
    }
    if(th > 0) printf("%d\n", th);
    else printf("0\n");
    return 0;
}

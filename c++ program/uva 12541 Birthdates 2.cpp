#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

struct birthdate
{
        int y, m, d;
        char name[50];
};

bool cmp(birthdate &p, birthdate &q);

int main()
{
        int n, i;
        scanf("%d", &n);

        struct birthdate b[n];

        for(i = 0; i < n; i++)
        {
            scanf("%s", b[i].name);
            scanf("%d%d%d", &b[i].d, &b[i].m, &b[i].y);
        }
        sort(b, b+n, cmp);

        printf("%s\n", b[n-1].name);
        printf("%s\n", b[0].name);

        return 0;
}

bool cmp(birthdate &p, birthdate &q)
{
    if(p.y > q.y) return false;
    else if(p.y < q.y) return true;
    else
    {
        if(p.m > q.m) return false;
        else if(p.m < q.m) return true;
        else
        {
            if(p.d > q.d) return false;
            else return true;
        }
    }
}


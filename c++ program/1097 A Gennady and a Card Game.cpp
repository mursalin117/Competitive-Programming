#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, r = 0;
    char a[5], b[5], c1, c2;
    scanf("%c%c", &c1, &c2);
    getchar();
    for(i = 0; i < 5; i++)
    {
          scanf("%c%c", &a[i], &b[i]);
          getchar();
    }
    for(i = 0; i < 5; i++)
    {
        if(c1 == a[i] || c2 == b[i])
        {
            r = 1;
            break;
        }
    }
    if(r == 0) printf("NO\n");
    else printf("YES\n");
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, m;
    char c;

    scanf("%c%d", &c, &d);

    if(d == 1 || d == 8)
    {
        if(c == 'a' || c == 'h') printf("3\n");
        else printf("5\n");
    }
    else if((c == 'a' || c == 'h') && (d != 1 || d != 8)) printf("5\n");
    else printf("8\n");

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, count8 = 0, d, com;
    char ch;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        scanf("%c", &ch);

        if(ch == '8') count8++; //printf("%d\n", count8);}
        else continue;
    }
    d = n / 11;
    com = min(d, count8);

    printf("%d\n", com);

    return 0;
}

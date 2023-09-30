#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, a[6] = { 0, 0, 0, 0, 0, 0}, coun = 0;
    string s;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        cin >> s;
        if(!s.compare("purple")) { a[0] = 1; coun++; }
        else if(!s.compare("green")) { a[1] = 1; coun++; }
        else if(!s.compare("blue")) { a[2] = 1; coun++; }
        else if(!s.compare("orange")) { a[3] = 1; coun++; }
        else if(!s.compare("red")) { a[4] = 1; coun++; }
        else { a[5] = 1; coun++; }
    }
   // for(i = 0; i < 6; i++) printf("%d ", a[i]);
    printf("%d\n", 6 - coun);
    for(i = 0; i < 6; i++)
    {
        if(a[i] == 0 && i == 0) printf("Power\n");
        else if(a[i] == 0 && i == 1) printf("Time\n");
        else if(a[i] == 0 && i == 2) printf("Space\n");
        else if(a[i] == 0 && i == 3) printf("Soul\n");
        else if(a[i] == 0 && i == 4) printf("Reality\n");
        else if(a[i] == 0 && i == 5) printf("Mind\n");
        else continue;
    }
    return 0;
}

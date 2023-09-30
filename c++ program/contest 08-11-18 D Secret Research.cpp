#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, i;
    string s;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        getline(cin, s);
        if(s.compare("1") || s.compare("4") || s.compare("78")) printf("+\n");
        else if(s.compare("135") || s.compare("435") || s.compare("735")) printf("-\n");
        else if(s.compare("914") || s.compare("944") || s.compare("9784")) printf("*\n");
        else printf("?\n");
    }
    return 0;
}

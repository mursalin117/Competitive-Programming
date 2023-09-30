#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, x, a[10];
    for(i = 0; i < 10; i++)
        a[i] = 0;
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &x);
        a[x]++;
    }
    sort(a, a+10);
   // for(i = 0; i < 10; i++) cout << a[i] << endl;
    if(a[9] == 6) printf("Elephant\n");
    else if(a[9] == 5) printf("Bear\n");
    else if(a[9] == 4 && a[8] == 2) printf("Elephant\n");
    else if(a[9] == 4 && a[8] == 1) printf("Bear\n");
    else printf("Alien\n");
    return 0;
}

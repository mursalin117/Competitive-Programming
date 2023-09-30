#include <stdio.h>
//#include <stdlib.h>

//using namespace std;

int main()
{
    int n, i, count0 = 0, count8 = 0, d, com;
    char ch;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%c", &ch);
        if(ch == '0') { count0++; printf("%d\n", count0);}
        else if(ch == '8') {count8++; printf("%d\n", count8);}
        else continue;
    }
    d = n / 11;
    com = count0;
    if(com > count8) com = count8;

    if(d < com) printf("%d\n", d);
    else printf("%d\n", com);

    return 0;
}


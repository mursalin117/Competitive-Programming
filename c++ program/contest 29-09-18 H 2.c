#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, s, c, lens1, lens2, len, lenc;
    char s1[40], s2[40], sum[40];

    scanf("%d%d", &s1, &s2);

    lens1 = s1.size();
    lens2 = s2.size();

    len = lens1 * lens2;
    c = len;
    for(int j = 0; j < len; j++)
    {
        if(c > lens1) { printf(" "); c--;}
        else { printf("%s\n", s1); break;}
    }
    c = len;
    for(int i = 0; i < len; i++)
    {
        if(c > lens2) { printf(" "); c--;};
        else {printf("%s\n", s2); break;}
    }
    for(int i = 0; i < len; i++) { printf("_"); if(i == len - 1) printf("\n"); }
    for(int i = 0; i < lens2; i++)
    {
        c = len;
        for(int j = 0; j < len; j++)
        {
            a = stoi(s1);
            b = atoi(s2[i]);
            s = a * b;
            sum = to_string(s);
            lenc = sum;
            if((c - i) > lenc) printf(" ");
            else{ printf("%s\n", sum); break;}
        }
    }
}


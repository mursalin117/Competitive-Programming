#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, len1, len2, coun;
    int a[26], b[26];
    char s1[105], s2[105];

    scanf("%d", &t);
    getchar();

    for(i = 1; i <= t; i++)
    {
        gets(s1);
        gets(s2);

        len1 = strlen(s1);
        len2 = strlen(s2);
        coun = 0;

        for(j = 0; j < 26; j++) { a[j] = 0; b[j] = 0; }

        for(j = 0; j < len1; j++)
        {
            if(s1[j] >= 'a' && s1[j] <= 'z') a[s1[j]-'a']++;
            else if(s1[j] >= 'A' && s1[j] <= 'Z') a[s1[j]-'A']++;
            else continue;
        }

        for(j = 0; j < len2; j++)
        {
            if(s2[j] >= 'a' && s2[j] <= 'z') b[s2[j]-'a']++;
            else if(s2[j] >= 'A' && s2[j] <= 'Z') b[s2[j]-'A']++;
            else continue;
        }

        for(j = 0; j < 26; j++)
        {
            if(a[j] == b[j]) coun++;
        }

        if(coun == 26) printf("Case %d: Yes\n", i);
        else printf("Case %d: No\n", i);
    }
    return 0;
}

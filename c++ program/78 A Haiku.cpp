#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, s3;
    int len, coun1 = 0, coun2 = 0, coun3 = 0, i;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    len = s1.length();
    for(i = 0; i < len; i++)
    {
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u') coun1++;
    }
    len = s2.length();
    for(i = 0; i < len; i++)
    {
        if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u') coun2++;
    }
    len = s3.length();
    for(i = 0; i < len; i++)
    {
        if(s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u') coun3++;
    }
    //cout << coun1 << coun2 << coun3 << endl;
    if(coun1 == 5 && coun2 == 7 && coun3 == 5) printf("YES\n");
    else printf("NO\n");

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, sum1, sum2, t, len1, len2, so1, so2;
    double r;
    string s1, s2;

    while(getline(cin, s1) && getline(cin, s2))
    {
        len1 = s1.size();
        len2 = s2.size();

        sum1 = 0;
        sum2 = 0;

        for(i = 0; i < len1; i++)
        {
            if(s1[i] >= 'a' && s1[i] <= 'z') { sum1 += (s1[i] - 'a' + 1); }//cout << sum1 << endl; }
            else if(s1[i] >= 'A' && s1[i] <= 'Z'){ sum1 += (s1[i] - 'A' + 1); }//cout << sum1 << endl;}
            else continue;
        }
        for(i = 0; i < len2; i++)
        {
            if(s2[i] >= 'a' && s2[i] <= 'z') { sum2 += (s2[i] - 'a' + 1); }//cout << sum2 << endl; }
            else if(s2[i] >= 'A' && s2[i] <= 'Z') {sum2 += (s2[i] - 'A' + 1); }//cout << sum2 << endl; }
            else continue;
        }
        //cout << sum1 << "  " << sum2 << endl;
        so1 = sum1;
        sum1 = 0;
        while(so1 > 0)
        {
            sum1 += so1%10;
            so1 = so1/10;
            if(so1 == 0 && sum1 < 10) break;
            else if(so1 == 0 && sum1 >= 10)
            {
                so1 = sum1;
                sum1 = 0;
            }
            else continue;
        }
        so2 = sum2;
        sum2 = 0;
        while(so2 > 0)
        {
            sum2 += so2%10;
            so2 = so2/10;
            if(so2 == 0 && sum2 < 10) break;
            else if(so2 == 0 && sum2 >= 10)
            {
                so2 = sum2;
                sum2 = 0;
            }
            else continue;
        }
       // cout << sum1 << " " << sum2 << endl;
        if(sum1 <= sum2) r = ((double)sum1/(double)sum2) * 100.0;
        else r = ((double)sum2/(double)sum1) * 100.0;

        printf("%0.2lf %%\n", r);
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*unsigned long long n, m, i, j, coun = 0;
    scanf("%ull%ull", &n, &m);
    unsigned long long a[n];
    if(m == 1) coun = n * n;
    else
    {
        for(i = 0; i < n; i++)
        {
            a[i] = (i+1) * (i+1);
        }
        for(i = 0; i < n; i++)
        {
            if(a[i] % m == 0) coun++;
            else
            {
                for(j = i+1; j < n; j++)
                {a
                    if((a[i] + a[j]) % m == 0) coun += 2;
                }
            }
        }
    }
    printf("%ul\n", coun);
*/
for(int i = 1; i <= 6; i++) {
    for(int j = 1; j <= 6; j++) {
        cout << (i * i ) + (j * j) << " - ";
    } cout << endl;
}
    return 0;
}

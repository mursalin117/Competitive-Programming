#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int nA,nB,k,m,i,j,countK = 0,countM = 0;

    cin >> nA >> nB >> k >> m;

    long int a[nA],b[nB];

    for(i = 0; i < nA; i++) cin >> a[i];

    for(i = 0; i < nB; i++) cin >> b[i];

    for(i = 0; i < m; i++)
    {
        //cout << b[nB-1-i] << endl;
        countK = 0;
        for(j = 0; j < k; j++)
        {
            //cout << a[j] << " ";
            if(b[nB-1-i] > a[j]) countK++;
        }
        //cout << countK << endl;
        if(countK == k) countM++;
    }
    if(countM == m) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

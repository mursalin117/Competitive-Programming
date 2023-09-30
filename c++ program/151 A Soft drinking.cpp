#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,totalLime,totalDrink,totalSalt,num_time;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    totalDrink = (k * l)/nl;
    totalLime = c * d;
    totalSalt = p/np;

    num_time = min(totalDrink,totalLime);
    num_time = min(num_time,totalSalt);

    num_time = num_time/n;

    cout << num_time << endl;

    return 0;
}

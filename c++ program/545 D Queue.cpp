#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, i, sum = 0, x, coun = 0;
    vector <long long int> v;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(i = 0; i < n; i++)
    {
        if(sum <= v[i])
        {
            coun++;
            sum += v[i];
        }
        //else sum += v[i];
    }
    cout << coun << endl;

    return 0;
}

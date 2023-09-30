#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,i,j,x,coun = 0,d = 0;
    vector <long int> v;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(i = 0; i < n; i++)
    {
        d = 0;
        for(j = i + 1; j < n; j++)
        {
            x = v[i] * 2;
            if(x >= v[j]) d++;
            else break;
        }
        if(d > coun) coun = d;
    }
    cout << coun+1 << endl;

    return 0;
}

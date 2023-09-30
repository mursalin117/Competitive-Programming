#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    long int n,q,i,j,coun =0,x;
    vector <long int > s;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        s.push_back(x);
    }
    cin >> q;
    for(i = 0; i < q; i++)
    {
        cin >> x;
        for(j = 0; j < n; j++)
        {
            if(binary_search(s.begin(),s.end(),x))
            {
                coun++;
                break;
            }
        }
    }
    cout << coun << endl;

    return 0;
}

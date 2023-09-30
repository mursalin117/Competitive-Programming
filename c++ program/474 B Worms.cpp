#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,s = 0,k,x;

    cin >> n;

    int a[n];
    for(i = 0; i < n; i++)
    {
        cin >> x;
        s = s + x;
        a[i] = s;
    }
    cin >> k;

    for(i = 0; i < k; i++)
    {
        cin >> x;
        for(j = 0; j < n; j++)
        {
            if(x <= a[j])
            {
                cout << j+1 << endl;
                break;
            }
        }
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n,i,j,m,coun;

    while(cin >> n)
    {
        vector < int > v;
        coun = 0;
        for(i=0; i<n; i++)
        {
            cin >> m;
            v.push_back(m);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(v[i] > v[j])
                {
                    m = v[i];
                    v[i] = v[j];
                    v[j] = m;
                    coun++;
                }
            }
        }
        cout << "Minimum exchange operations : " << coun << endl;
    }
    return 0;
}

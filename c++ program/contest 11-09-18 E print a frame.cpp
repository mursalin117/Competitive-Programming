#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,j;

    cin >> a >> b;

    while(a!=0 && b!=0)
    {
        for(i = 1; i <= a; i++)
        {
            if(i == 1 || i == a)
            {
                for(j = 0; j < b; j++)
                    cout << "#";
            }
            else
            {
                for(j = 0; j < b; j++)
                {
                    if(j == 0 || j == (b-1)) cout << "#";
                    else cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
        cin >> a >> b;
    }
    return 0;
}
